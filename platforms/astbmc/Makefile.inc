SUBDIRS += $(PLATDIR)/astbmc

<<<<<<< HEAD
ASTBMC_OBJS = palmetto.o habanero.o firestone.o garrison.o barreleye.o pnor.o common.o slots.o reddragon.o
=======
ASTBMC_OBJS = pnor.o common.o slots.o \
	      palmetto.o habanero.o firestone.o \
	      p8dtu.o p8dnu.o \
	      garrison.o barreleye.o \
	      witherspoon.o zaius.o romulus.o p9dsu.o

>>>>>>> b0809b89ecdf430c9f6e0272fb4cf0dc01a4989d
ASTBMC = $(PLATDIR)/astbmc/built-in.o
$(ASTBMC): $(ASTBMC_OBJS:%=$(PLATDIR)/astbmc/%)

