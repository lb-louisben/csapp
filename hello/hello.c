#include<stdio.h>
#include<unistd.h>
int g_var = 3;
int g_bss_var;

static int l_var = 3;
static int l_bss_var;

int add(int x, int y) {
	return x + y;
}

int main(int argc, char **argv[]) {
	printf("hello world! %d\n", getpid());
	printf("main addr: %p\n", &main);
	printf("add: %d\n", add(3, 4));
	getchar();
}
