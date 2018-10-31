#include <stdio.h>

char u[]="UVWXYZ";
char v[]="xyz";
struct T{
	int x;
	char c;
	char *t;
}a[]={{11,ˊAˊ,u},{100, ˊBˊ,v}},*p=a;


int main(void) {
	(++p)->x;//100
	p++,p->c;//B
	*p++->t,*p->t;//x
	*(++p)->t;//x
	*++p->t;//V
	++*p->t;//V
	return 0;
}