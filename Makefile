exe_name=app

MYCC=gcc
MYCXX=g++
CCXX=$(MYCC)

#STANDARD:=-std=c++11

SRCDIR:=.

INCDIR:= 
INCDIR+=./
INCDIR+=./include
INCDIR:=$(addprefix -I, $(INCDIR))

CLIBS:=

BUILD=build/
DEPSDIR=$(BUILD)depend/
OBJDIR=$(BUILD)obj/

CCXX_PARAM:=

CC_PARAM:=-c -g -Wall 
CXX_PARAM:=-c -g -Wall 

vpath %.c $(SRCDIR)

SRC:=$(foreach i, \
	$(SRCDIR), \
	$(wildcard $(addprefix $(i)/*, .c) ) \
	)

OBJ:=$(addsuffix .o, $(basename $(notdir $(SRC))))

DEPS:=$(foreach i, $(OBJ:.o=.d), $(addprefix $(DEPSDIR), $(i)))
vpath %.o $(OBJDIR)

%.o:%.cpp
	$(MYCXX) $(CXX_PARAM) $< $(CLIBS) $(STANDARD) -o $@ -MMD -MF $(DEPSDIR)$*.d -MP $(INCDIR) ; \
	mv $@ $(OBJDIR)

%.o:%.c
	$(MYCC) $(CC_PARAM) $< $(CLIBS) $(STANDARD) -o $@ -MMD -MF $(DEPSDIR)$*.d -MP $(INCDIR) ; \
	mv $@ $(OBJDIR)

.PHONY:all clean mkdirDEPS mkdirOBJ
all:mkdirDEPS mkdirOBJ $(exe_name)

$(exe_name):$(OBJ)
	$(CCXX) $(CCXX_PARAM) $(filter %.o, $(addprefix $(OBJDIR), $(notdir $^))) $(CLIBS) $(STANDARD) -o $@ 

mkdirDEPS:
	mkdir -p $(DEPSDIR)

mkdirOBJ:
	mkdir -p $(OBJDIR)

-include $(DEPS)

clean:
	rm -rf $(BUILD)
	rm -f $(exe_name)



