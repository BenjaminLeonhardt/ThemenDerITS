SUBDIRS := readme vorlage

.PHONY: all install clean clean-all $(SUBDIRS)

all: $(SUBDIRS)

install: $(SUBDIRS)

clean: $(SUBDIRS)

clean-all: $(SUBDIRS)

$(SUBDIRS):
	$(MAKE) -C $@ $(MAKECMDGOALS)

.PHONY: $(SUBDIRS)
