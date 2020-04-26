exe_name=app

MYCC=gcc
MYCXX=g++
CCXX=$(MYCC)

#STANDARD:=-std=c++11

SRCDIR := ./
SRCDIR += source/

INCDIR:= 
INCDIR+=.
INCDIR+=./include
INCDIR:=$(addprefix -I, $(INCDIR))

CLIBS:=

BUILD=build/

CCXX_PARAM:=

CC_PARAM:=-c -g -Wall 
CXX_PARAM:=-c -g -Wall 

vpath %.c $(SRCDIR)

SRC:=$(foreach i, \
	$(SRCDIR), \
	$(wildcard $(addprefix $(i)*, .c) ) \
	)

OBJ := $(SRC:.c=.o)

DEPS := $(addprefix $(BUILD), $(OBJ:.o=.d))

vpath %.o $(BUILD)

%.o:%.cpp
	@echo [$(MYCXX)]---[$<]
	@$(MYCXX) $(CXX_PARAM) $< $(CLIBS) $(STANDARD) -o $@ -MMD -MF $(BUILD)$*.d -MP $(INCDIR) ; \
	mv $@ $(BUILD)$@

%.o:%.c
	@echo [$(MYCC)]---[$<]
	@$(MYCC) $(CC_PARAM) $< $(CLIBS) $(STANDARD) -o $@ -MMD -MF $(BUILD)$*.d -MP $(INCDIR) ; \
	mv $@ $(BUILD)$@

%/:
	@mkdir -p $@

.PHONY:all clean  
all:$(addprefix $(BUILD), $(SRCDIR)) $(exe_name)

$(exe_name):$(OBJ)
	@echo ---------------------------[create $@]-[$(CCXX)]----------------------------------
	@echo " "$(foreach i, $(addprefix $(BUILD), $(OBJ)), $(i)"\r\n ")
	@$(CCXX) $(CCXX_PARAM) $(addprefix $(BUILD), $(OBJ)) $(CLIBS) $(STANDARD) -o $@ 

-include $(DEPS)

clean:
	rm -rf $(BUILD)
	rm -f $(exe_name)



