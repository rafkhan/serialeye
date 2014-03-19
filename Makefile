include config.mk

SRC = libserialeye.c
OBJ = ${SRC:.c=.o}

all: serialeye.so

.c.o:
	@echo CC $<
	@${CC} -c ${CFLAGS} $<

serialeye.so: ${OBJ}
	@${CC} -shared -o $@ ${OBJ} ${LDFLAGS}
