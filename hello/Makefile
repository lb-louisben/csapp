# CFLAGS="-static"

BINS := hello hello_no_pie hello_static hello.o
all: ${BINS}

hello: hello.c
	gcc -g -o $@ $^

hello_no_pie: hello.c
	gcc -g -o $@ -fno-pie -no-pie $^

hello_static: hello.c
	gcc -g -o $@ -static $^

hello.o: hello.c
	gcc -g -c -o $@ $^

clean:
	rm -rf ${BINS}

