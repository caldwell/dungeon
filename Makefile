# Makefile for dungeon

# Where to install the program
#BINDIR = /usr/games
BINDIR = .
# Where to install the data file
#LIBDIR = /usr/games/lib
LIBDIR = .

# The dungeon program provides a ``more'' facility which tries to
# figure out how many rows the terminal has.  Several mechanisms are
# supported for determining this; the most common one has been left
# uncommented.  If you have trouble, especially when linking, you may
# have to select a different option.

# more option 1: use the termcap routines.  On some systems the LIBS
# variable may need to be set to -lcurses.  On some it may need to
# be /usr/lib/termcap.o.  These options are commented out below.
LIBS = -ltermcap
TERMFLAG =
# LIBS = -lcurses
# LIBS = /usr/lib/termcap.o

os:=$(shell uname -s)

ifeq ($(os),Linux)
LIBS += -lbsd -lreadline
else
LIBS += -lbsd -ledit
endif

# more option 2: use the terminfo routines.  On some systems the LIBS
# variable needs to be -lcursesX, but probably all such systems support
# the termcap routines (option 1) anyhow.
# LIBS = -lcurses
# TERMFLAG = -DMORE_TERMINFO

# more option 3: assume all terminals have 24 rows
# LIBS =
# TERMFLAG = -DMORE_24

# more option 4: don't use the more facility at all
# LIBS =
# TERMFLAG = -DMORE_NONE

# End of more options

# Uncomment the following line if you want to have access to the game
# debugging tool.  This is invoked by typing "gdt".  It is not much
# use except for debugging.
# GDTFLAG = -DALLOW_GDT

# Compilation flags
CFLAGS = -O -g
# On SCO Unix Development System 3.2.2a, the const type qualifier does
# not work correctly when using cc.  The following line will cause it
# to not be used and should be uncommented.
# CFLAGS= -O -Dconst=

##################################################################

# Source files
CSRC =	actors.c ballop.c clockr.c demons.c dgame.c dinit.c dmain.c\
	dso1.c dso2.c dso3.c dso4.c dso5.c dso6.c dso7.c dsub.c dverb1.c\
	dverb2.c gdt.c lightp.c local.c nobjs.c np.c np1.c np2.c np3.c\
	nrooms.c objcts.c rooms.c sobjs.c supp.c sverbs.c verbs.c villns.c

# Object files
OBJS =	actors.o ballop.o clockr.o demons.o dgame.o dinit.o dmain.o\
	dso1.o dso2.o dso3.o dso4.o dso5.o dso6.o dso7.o dsub.o dverb1.o\
	dverb2.o gdt.o lightp.o local.o nobjs.o np.o np1.o np2.o np3.o\
	nrooms.o objcts.o rooms.o sobjs.o supp.o sverbs.o verbs.o villns.o

all: dungeon dungeon.wasm

dungeon: $(OBJS)
	$(CC) $(CFLAGS) -o dungeon $(OBJS) $(LIBS)

WASM_OBJS = $(patsubst %.o,%.wasm.o,$(OBJS))
dungeon.wasm: export CPATH=/usr/include/wasm32-wasi
dungeon.wasm: LINK=wasm-ld-14 --no-entry --export game_move --import-undefined --export malloc --export free -z,'stack-size=$[8 * 1024 * 1024]'
dungeon.wasm: CFLAGS=
dungeon.wasm: LIBS=-L /usr/lib/wasm32-wasi -lc
dungeon.wasm: $(WASM_OBJS)
	$(LINK) $(CFLAGS) -o $@ $^ $(LIBS)

# These 2 turn off features that interactively ask questions of the user. wasm code can't block, so there's
# way to connect these inputs to javascript.
supp.wasm.o: TERMFLAG=-DMORE_NONE
dso3.wasm.o: CFLAGS+=-DASSUME_YES
%.wasm.o: CC=clang --target=wasm32-wapi -D__wasi__
%.wasm.o: %.c
	$(CC) $(CFLAGS) $(GDTFLAG) $(TERMFLAG) -c $< -o $@

install: dungeon
	cp dungeon $(BINDIR)

clean:
	rm -f $(OBJS) $(WASM_OBJS) dungeon dungeon.wasm dtextc.dat core dsave.dat *~

dtextc.dat:
	cat dtextc.uu1 dtextc.uu2 dtextc.uu3 dtextc.uu4 | uudecode

dtextc.c: dtextc.dat
	echo "unsigned char dtextc[] = {" > $@
	perl -e 'local $$/; open DTEXTC, "<dtextc.dat"; $$dtextc = <DTEXTC>; print join(",", map { sprintf("0x%02x", $$_) } unpack "C*",$$dtextc);' >> $@
	echo "};" >> $@

dinit.o: dinit.c funcs.h vars.h dtextc.h
	$(CC) $(CFLAGS) $(GDTFLAG) -DTEXTFILE=\"$(LIBDIR)/dtextc.dat\" -c dinit.c

dgame.o: dgame.c funcs.h vars.h
	$(CC) $(CFLAGS) $(GDTFLAG) -c dgame.c

gdt.o: gdt.c funcs.h vars.h
	$(CC) $(CFLAGS) $(GDTFLAG) -c gdt.c

local.o: local.c funcs.h vars.h
	$(CC) $(CFLAGS) $(GDTFLAG) -c local.c

supp.o: supp.c funcs.h vars.h
	$(CC) $(CFLAGS) $(TERMFLAG) -c supp.c	

actors.o actors.wasm.o: funcs.h vars.h
ballop.o ballop.wasm.o: funcs.h vars.h
clockr.o clockr.wasm.o: funcs.h vars.h
demons.o demons.wasm.o: funcs.h vars.h
dmain.o  dmain.wasm.o:  funcs.h vars.h
dso1.o   dso1.wasm.o:   funcs.h vars.h
dso2.o   dso2.wasm.o:   funcs.h vars.h
dso3.o   dso3.wasm.o:   funcs.h vars.h
dso4.o   dso4.wasm.o:   funcs.h vars.h
dso5.o   dso5.wasm.o:   funcs.h vars.h
dso6.o   dso6.wasm.o:   funcs.h vars.h
dso7.o   dso7.wasm.o:   funcs.h vars.h
dsub.o   dsub.wasm.o:   funcs.h vars.h dtextc.h
dverb1.o dverb1.wasm.o: funcs.h vars.h
dverb2.o dverb2.wasm.o: funcs.h vars.h
lightp.o lightp.wasm.o: funcs.h vars.h
nobjs.o  nobjs.wasm.o:  funcs.h vars.h
np.o     np.wasm.o:     funcs.h vars.h
np1.o    np1.wasm.o:    funcs.h vars.h parse.h
np2.o    np2.wasm.o:    funcs.h vars.h parse.h
np3.o    np3.wasm.o:    funcs.h vars.h parse.h
nrooms.o nrooms.wasm.o: funcs.h vars.h
objcts.o objcts.wasm.o: funcs.h vars.h
rooms.o  rooms.wasm.o:  funcs.h vars.h
sobjs.o  sobjs.wasm.o:  funcs.h vars.h
sverbs.o sverbs.wasm.o: funcs.h vars.h
verbs.o  verbs.wasm.o:  funcs.h vars.h
villns.o villns.wasm.o: funcs.h vars.h
dtextc.h dtextc.wasm.h: dtextc.c
