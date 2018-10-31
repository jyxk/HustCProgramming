#include<stdio.h>
#include<stdlib.h>
#include<math.h>

double fun(double x);
double dfun(double x);

int main(void){
    double x0=0.0, x1= 65536.0;
    double e = 1e-6;
    double el;

    el = fabs(x1 - x0);
   while ( el > e){
        x1 = x0 - fun(x0) / dfun(x0);
        el = fabs(x1 - x0);
        x0 = x1;
    }

    printf("%lf\n", x1);
    return 0;
}

double fun(double x){
    return 3 * x * x * x - 4 * x * x - 5 * x + 13;
}

double dfun(double x){
    return 4  * x * x - 8  * x - 5;
}