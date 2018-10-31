#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[]) {
	char a[5] = argv[1];
	char b[5] = argv[2];
	char *(*p[2])(const char *, const char *) = {strcpy, strstr};
	
	printf("%s %s", p[1](a, b) ,p[0](a, b));
	return 0;
}