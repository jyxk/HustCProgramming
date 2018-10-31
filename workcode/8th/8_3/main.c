#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
	freopen("test", "w", stdout);

	if(argc<2){
		fprintf(stderr, "arguments error!\n");
		exit(-1);
	}

	for(int i = 1; i < argc; i++)
		if(*argv[i] >= 'a' && *argv[i] <= 'z')
			(*argv[i]) -= 32;

	for(int i = 1; i < argc; i++)
		printf("%s ", argv[i]);

	fclose(stdout);

	return 0;
}