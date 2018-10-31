#include<stdio.h>
int main(void){

    double x;
    int i;
    scanf("%lf", &x);

#if 1
    if(x < 1000)
        printf("No Tax\n");
    else if(x >= 1000 && x < 2000)
        printf("Tax is %lf\n", 0.05*(x-1000));
    else if(x >= 2000 && x < 3000)
        printf("Tax is %lf\n", 0.1*(x-2000)+50);
    else if(x >= 3000 && x < 4000)
        printf("Tax is %lf\n", 0.15*(x-3000)+150);
    else if(x >= 4000 && x < 5000)
        printf("Tax is %lf\n", 0.2*(x-4000)+300);
    else if(x > 5000)
        printf("Tax is %lf\n", 0.25*(x-5000)+500);
#endif

#if 0
    if(x < 1000)
        i = 1;
    else if(x >= 1000 && x < 2000)
        i = 2;
    else if(x >= 2000 && x < 3000)
        i = 3;
    else if(x >= 3000 && x < 4000)
        i = 4;
    else if(x >= 4000 && x < 5000)
        i = 5;
    else if(x > 5000)
        i = 6;

    switch(i){
        case 1:
            printf("No Tax\n");
            break;
        case 2:
            printf("Tax is %lf\n", 0.05*(x-1000));
            break;
        case 3:
            printf("Tax is %lf\n", 0.1*(x-2000)+50);
            break;
        case 4:
            printf("Tax is %lf\n", 0.15*(x-3000)+150);
            break;
        case 5:
            printf("Tax is %lf\n", 0.2*(x-4000)+300);
            break;
        case 6:
            printf("Tax is %lf\n", 0.25*(x-5000)+500);
            break;
    }
#endif
    return 0;
}