CC = gcc
TARGET = logger

all: $(TARGET)

logger.o:  ./bin/logger.h ./src/logger.c
	$(CC) -c -fPIC ./src/*.c

$(TARGET): logger.o
	$(CC) -shared -o ./bin/liblogger.so ./*.o

clean:
	rm -f *.o

#компиляция с динамической библиотекой: gcc -o test *.o -L../lib/logger/bin/ -llogger -Wl,-rpath,../lib/logger/bin/
