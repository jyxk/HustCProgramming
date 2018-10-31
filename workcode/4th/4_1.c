#include <stdio.h>

#define SUM(a, b) ((a)+(b))
#define DIF(a, b) ((a)-(b))
#define SWAP(a,b,t)  t=a,a=b,b=t

int main(void)
{
    int b, a, t;
    printf("Input two integers a, b:");
    scanf("%d %d", &a,&b);
    printf("\nSUM=%d\n the difference between square of a and square of b is:%d",SUM(a,b), SUM(a,b)*DIF(a,b));
    SWAP(a,b,t);
    printf("\nNow a=%d,b=%d\n",a,b);

    return 0;
}
