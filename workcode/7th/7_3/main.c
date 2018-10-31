#include <stdio.h>

typedef struct bits{
	unsigned short bit0 : 1;
	unsigned short bit1 : 1;
	unsigned short bit2 : 1;
	unsigned short bit3 : 1;
	unsigned short bit4 : 1;
	unsigned short bit5 : 1;
	unsigned short bit6 : 1;
	unsigned short bit7 : 1;
} BITS;

void f0(BITS b);
void f1(BITS b);
void f2(BITS b);
void f3(BITS b);
void f4(BITS b);
void f5(BITS b);
void f6(BITS b);
void f7(BITS b);

int main() {
	BITS bit= {1, 1, 1, 1, 0, 1, 0, 1};
	void(*p[8])(struct bits b);

	p[0] = f0;
	p[1] = f1;
	p[2] = f2;
	p[3] = f3;
	p[4] = f4;
	p[5] = f5;
	p[6] = f6;
	p[7] = f7;

	if (bit.bit0)  p[0](bit);
	if (bit.bit1)  p[1](bit);
	if (bit.bit2)  p[2](bit);
	if (bit.bit3)  p[3](bit);
	if (bit.bit4)  p[4](bit);
	if (bit.bit5)  p[5](bit);
	if (bit.bit6)  p[6](bit);
	if (bit.bit7)  p[7](bit);

	return 0;
}

void f0(BITS b){
	printf("the function 0 is called!The argv is %x\n", b);
}

void f1(BITS b){
	printf("the function 1 is called!The argv is %x\n", b);
}

void f2(BITS b){
	printf("the function 2 is called!The argv is %x\n", b);
}

void f3(BITS b){
	printf("the function 3 is called!The argv is %x\n", b);
}

void f4(BITS b){
	printf("the function 4 is called!The argv is %x\n", b);
}

void f5(BITS b){
	printf("the function 5 is called!The argv is %x\n", b);
}

void f6(BITS b){
	printf("the function 6 is called!The argv is %x\n", b);
}

void f7(BITS b){
	printf("the function 7 is called!The argv is %x\n", b);
}
