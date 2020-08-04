# 生成可执行文件名
exe_name=app

# 生成库文件名称
# (生成动态编译库需要将库存放在/usr/local/系统库目录下，否则编译的可执行文件无法找到动态库)
# (生成库文件在链接时需要先链接此库文件，在链接其他此库所依赖的库，否则编译无法通过！！！)
# (上一注释说明：编译器对库的链接顺序有严格要求，如：a文件依赖b文件，则编译时需要先编译a文件再编译b文件，链接库也是)
lib_name:=

# 总编译参数
CCXX_PARAM:=

# 使用动态编译生成库文件需要包含 -fPIC 选项
# C文件编译参数
CC_PARAM:=-c -g -Wall 
#CC_PARAM:=-c -g -Wall -fPIC 
# C++文件编译参数
CXX_PARAM:=-c -g -Wall 

#COMPILER_PREFIX:=arm-linux-
COMPILER_PREFIX:=

# 编译器选择
# # .c文件编译器
MYCC=$(COMPILER_PREFIX)gcc
# # .cpp文件编译器
MYCXX=$(COMPILER_PREFIX)g++
# 生成可执行文件编译器
CCXX=$(MYCXX)

# 编译标准
STANDARD:=-std=c++11

# 源文件类型
FILE_TYPE:=.c .cpp

# 是否需要遍历源码目录的子目录,1：遍历，0：无需遍历
EACH_SRCDIR:=0
# 是否需要遍历头文件目录的子目录,1：遍历，0：无需遍历
EACH_INCDIR:=0

# 源文件路径
SRCDIR :=
SRCDIR += .

ifeq ($(EACH_SRCDIR),1)
# 遍历所有子目录
SRCDIR := $(shell find $(SRCDIR) -type d)
endif

TMP_SRCDIR := $(filter-out %/, $(SRCDIR))
SRCDIR := $(filter %/, $(SRCDIR))
SRCDIR += $(addsuffix /,$(TMP_SRCDIR))

# 头文件路径
INCDIR:= 
#INCDIR+=.
INCDIR+=include/

ifeq ($(EACH_INCDIR),1)
INCDIR:=$(shell find $(INCDIR) -type d)
endif

# 编译链接库
CLIBS:=

# 链接库路径
CLIBS_DIR:=
#CLIBS_DIR+=libs/

# 编译中间文件保存路径
BUILD=build/

# 编译生成库保存路径
MYLIBSDIR:=libs/

ifneq ($(BUILD),)
BUILD_ALLDIR:=$(addprefix $(BUILD), $(SRCDIR))
endif

ifneq ($(INCDIR),)
INCDIR:=$(addprefix -I, $(INCDIR))
endif

ifneq ($(CLIBS),)
CLIBS:=$(addprefix -l,$(CLIBS))
endif

ifneq ($(CLIBS_DIR),)
CLIBS_DIR:=$(addprefix -L, $(CLIBS_DIR))
endif

ifneq ($(lib_name),)
static_lib_name:=$(addprefix lib,$(lib_name))
static_lib_name:=$(addsuffix .a,$(static_lib_name))

dynamic_lib_name:=$(addprefix lib,$(lib_name))
dynamic_lib_name:=$(addsuffix .so,$(dynamic_lib_name))
endif

#vpath %.c $(SRCDIR)

# 搜索源文件
SRC:=$(foreach j, $(FILE_TYPE), $(foreach i, \
		$(SRCDIR), \
		$(wildcard $(addprefix $(i)*, $(j)) ) \
		) \
	)

# 生成中间文件名
OBJ := $(foreach i, $(FILE_TYPE), $(SRC:$(i)=.o))
OBJ := $(filter %.o, $(OBJ))

# 生成依赖文件名
DEPS := $(addprefix $(BUILD), $(OBJ:.o=.d))

# 默认.o文件搜索路径
vpath %.o $(BUILD)
# 默认库文件搜索路径
vpath %.a $(MYLIBSDIR)
vpath %.so $(MYLIBSDIR)

# .cpp文件编译规则
%.o:%.cpp
	@echo $(MYCXX)" \t \t "$<
	@$(MYCXX) $(CXX_PARAM) $< $(CLIBS)  -o $@ -MMD -MF $(BUILD)$*.d -MP $(INCDIR) $(CLIBS_DIR) ; \
	mv $@ $(BUILD)$@

# .c文件编译规则
%.o:%.c
	@echo $(MYCC)" \t \t "$<
	@$(MYCC) $(CC_PARAM) $< $(CLIBS) -o $@ -MMD -MF $(BUILD)$*.d -MP $(INCDIR) $(CLIBS_DIR) ; \
	mv $@ $(BUILD)$@

%/:
	@mkdir -p $@

.PHONY:all clean staticlib dynlib cleanlib
all:$(BUILD_ALLDIR) $(exe_name)

$(exe_name):$(OBJ)
	@echo ---------------------------[create $@]-[$(CCXX)]----------------------------------
	@echo " "$(foreach i, $(addprefix $(BUILD), $(OBJ)), $(i)"\r\n ")
	@$(CCXX) $(CCXX_PARAM) $(addprefix $(BUILD), $(OBJ)) $(CLIBS) $(STANDARD) -o $@ $(CLIBS_DIR)

-include install.mk
-include Update.mk

-include $(DEPS)

ifneq ($(static_lib_name),)
staticlib: 
	rm -rf $(BUILD)
	rm -f $(MYLIBSDIR)$(static_lib_name)
ifneq ($(static_lib_name),)
	make $(static_lib_name) 
endif

$(static_lib_name):$(BUILD_ALLDIR) $(MYLIBSDIR) $(OBJ)
	@echo ---------------------------[create $@]----------------------------------
	@ar -crv $@ $(addprefix $(BUILD), $(OBJ)) ; \
	mv $@ $(MYLIBSDIR)$@

endif

ifneq ($(dynamic_lib_name),)
dynlib: 
	rm -rf $(BUILD)
	rm -f $(MYLIBSDIR)$(dynamic_lib_name)
ifneq $($(dynamic_lib_name),)
	make $(dynamic_lib_name) 
endif

$(dynamic_lib_name):$(BUILD_ALLDIR) $(MYLIBSDIR) $(OBJ)
	@echo ---------------------------[create $@]----------------------------------
	@$(CCXX) $(CCXX_PARAM) $(addprefix $(BUILD), $(OBJ)) $(CLIBS) $(STANDARD) -shared -o $@ $(CLIBS_DIR); \
	mv $@ $(MYLIBSDIR)$@
endif

clean:
	rm -rf $(BUILD)
	rm -f $(exe_name)

cleanlib:
	rm -rf $(BUILD)
ifneq ($(static_lib_name),)
	rm -f $(MYLIBSDIR)$(static_lib_name)
endif
ifneq ($(dynamic_lib_name),)
	rm -f $(MYLIBSDIR)$(dynamic_lib_name)
endif

cleanall:clean cleanlib

-include chmod.mk


