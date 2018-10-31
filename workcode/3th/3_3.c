#include <stdio.h>

double sum_fac(int n);
double s=0;
double fac = 1;

int main(void){

    int k;
    for(k=1;k<6;k++)
         printf("k=%d\tthe sum is %lf\n",k,sum_fac(k));
}

double sum_fac(int n){

    fac *= n;
    s += 1/fac;
    
    return s;
}
