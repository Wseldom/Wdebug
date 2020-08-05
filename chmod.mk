CHMOD_FILE_TYPE := .h 
#CHMOD_FILE_TYPE += .c 
#CHMOD_FILE_TYPE += .cpp 

CHMOD_DIR := include
#CHMOD_DIR+=

CHMOD_DIR := $(shell find $(CHMOD_DIR) -type d)
TMP_CHMOD_DIR := $(filter-out %/, $(CHMOD_DIR))
CHMOD_DIR := $(filter %/, $(CHMOD_DIR))
CHMOD_DIR += $(addsuffix /,$(TMP_CHMOD_DIR))


CHMOD_PARAM := $(foreach i,$(CHMOD_FILE_TYPE),$(foreach j,$(CHMOD_DIR),$(j)*$(i)))

.PHONY:chmod
chmod:
	sudo chmod a-x $(CHMOD_PARAM)



