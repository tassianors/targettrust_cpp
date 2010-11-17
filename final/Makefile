#tcp server makefile

#include ../../dirs.mk

TARGET := main

########################################################################
#Include dirs
INCLUDE	:= #../../include
COMMON	:= #../../common
TCPCOMMON := #../common

########################################################################
#flags
CFLAGS   := -O2 -Wall -Werror -Wmissing-declarations -Wmissing-prototypes
CINCLUDE := -I. -I$(INCLUDE) -I$(COMMON) -I$(TCPCOMMON)
CLIBDIR  :=
CLIBS    := #-lm -lpthread
DEPFLAGS := -MM

########################################################################
#includes
INCLUDE    = ${CINCLUDE}
FLAGS      = ${CFLAGS}
LIBDIR     = ${CLIBDIR}
LIBS       = ${CLIBS}
LIBINCLUDE = $(LIBDIR)

########################################################################
#Setzen alle zusammen..
CC     	 = g++
LD       = ld
AR       = ar
ARFLAGS  = rvu
CMPFLAGS = ${FLAGS} ${INCLUDE}
LDFLAGS  = ${LIBS}

########################################################################
CSOURCES = $(wildcard *.cpp)
OBJECTS  = $(CSOURCES:.cpp=.o)
DEPS     = $(CSOURCES:.cpp=.d)
OBJS	 = #$(COMMON)/*.o $(TCPCOMMON)/*.o 
LIBFILES = #$(LIBINCLUDE)/libRobot.a

########################################################################
#RTAI
#prefix := $(shell rtai-config --prefix)

#ifeq ($(prefix),)
#$(error Please add <rtai-install>/bin to your PATH variable)
#endif

#LXRT_CFLAGS = $(shell rtai-config --lxrt-cflags)
#LXRT_LDFLAGS = $(shell rtai-config --lxrt-ldflags)

########################################################################

#LIBFILES += $(LXRT_LDFLAGS)

#General
QUIET = @

.PHONY: clean clobber 

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(QUIET)echo Compiling executable file: $@
	$(QUIET)${CC} $(LDFLAGS) -o $@  $^ $(OBJS) $(LIBFILES) $(LXRT_LDFLAGS)

%.o: %.c
	$(QUIET)echo Creating object: $@
	$(QUIET)$(CC) $(CMPFLAGS) $(LIBS) -c $(LXRT_CFLAGS) $^

clean:
	$(QUIET)echo Removing temp and object files
	$(QUIET)rm -f *~ *.bak *.o $(DEPS) 

clobber: clean
	$(QUIET)echo Removing executable and some unnecessary files
	$(QUIET)rm -f $(TARGET)

-include $(DEPS)
%.d: %.c
	$(QUIET)echo Creating dep: $@
	$(QUIET)$(CC) $(DEPFLAGS) $(LIBS) $(CMPFLAGS) $< \
	| sed 's!\($*\)\.o[ :]*!\1.o $@ : !g' > $@; \
	[ -s $@ ] || rm -f $@

