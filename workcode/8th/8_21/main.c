#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){

	char ch;

	if(argc!=2){
		printf("Arguments error!\n");
		exit(-1);
	}

	if((freopen(argv[1], "r", stdin))==NULL){        /* fp 指向 filename */
		fprintf(stderr,"Can't open %s file!\n",argv[1]);
		exit(-1);
	}

	while((ch=getchar())!=EOF)          /* 从filename中读字符 错在此处*/
		putchar(ch);
	/* 向显示器中写字符 */
	fclose(stdout);

	return 0;
}
