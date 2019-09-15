#
# VARIABLES
#

CC  = gcc

EXEC = main
EXECDIR = .

SRCDIR = src
OUTDIR = out
SRCEXT = c
OBJEXT = o
DEPEXT = d

LIBDIR = lib
LIBS   = -lncurses

CFLAGS = -ggdb -std=c11 -Wall -Wextra -Werror -pedantic -m64

CINCS = -Isrc

CSRC := $(shell find $(SRCDIR) -type f -name *.$(SRCEXT))
COBJ := $(patsubst $(SRCDIR)/%,$(OUTDIR)/%,$(CSRC:.$(SRCEXT)=.$(OBJEXT)))

#
# COMPILE STUFF
#

all: resources $(EXEC)

resources: directories

directories: 
	@mkdir -p $(EXECDIR)
	@mkdir -p $(OUTDIR)

clean:
	@echo "  CLEAN"
	@$(RM) -rf $(OUTDIR)

cleaner: clean
#@$(RM) -rf $(EXECDIR)

$(EXEC): $(COBJ)
	@$(CC) -o $(EXECDIR)/$(EXEC) $^ $(LIBS)

$(OUTDIR)/%.$(OBJEXT): $(SRCDIR)/%.$(SRCEXT)
	@mkdir -p $(dir $@)
	@$(CC) $(CFLAGS) $(CINCS) -c -o $@ $<
	@$(CC) $(CFLAGS) $(INCDEP) -MM $(SRCDIR)/$*.$(SRCEXT) > $(OUTDIR)/$*.$(DEPEXT)
	@cp -f $(OUTDIR)/$*.$(DEPEXT) $(OUTDIR)/$*.$(DEPEXT).tmp
	@sed -e 's|.*:|$(OUTDIR)/$*.$(OBJEXT):|' < $(OUTDIR)/$*.$(DEPEXT).tmp > $(OUTDIR)/$*.$(DEPEXT)
	@sed -e 's/.*://' -e 's/\\$$//' < $(OUTDIR)/$*.$(DEPEXT).tmp | fmt -1 | sed -e 's/^ *//' -e 's/$$/:/' >> $(OUTDIR)/$*.$(DEPEXT)
	@rm -f $(OUTDIR)/$*.$(DEPEXT).tmp

.PHONY: all remake clean cleaner resources
