#include <stdio.h>

int main(void){
    float q;
    float *p = &q;
    scanf("%f", p);
    printf("%f\n", q);

    return 0;
}
