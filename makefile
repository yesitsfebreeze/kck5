.PHONY: flash push

all: push

flash:
	@qmk flash -kb kck5 -km default

push:
	@git add -A
	@git commit -m adjustments
	@git push