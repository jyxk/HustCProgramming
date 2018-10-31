#include <stdio.h>

int main(void){ 
    int i, n, s=1;

    printf("Please enter n:");
    scanf("%d", &n);

#if 0
    i = 1;
    while(i<=n){
        s *= i;
        i++;
    }
#endif

#if 1
    i = 1;
    do{
        s *= i;
        i++;
    }while(i<=n);
#endif
    printf("%d! = %d", n, s);

    return 0;
}
