#include <stdio.h>

long sum_fac(int n);
long s=0;
long fac = 1;

int main(void){

    int k;
    for(k=1;k<6;k++)
         printf("k=%d\tthe sum is %ld\n",k,sum_fac(k));
}

long sum_fac(int n){

    fac*=n;
    s+=fac;
    
    return s;
}
