#include<stdio.h>
#include<math.h>

#define S(a, b, c) (((a)+(b)+(c))/2)
#define AREA(S, a, b, c) sqrt((S)*((S)-a)*((S)-b)*((S)-c))

int main(void){

    double s, a, b, c, area;

    scanf("%lf%lf%lf", &a, &b, &c);

    s = S(a, b, c);
    area = AREA(s, a, b, c);
    printf("s = %lf\narea = %lf", s, area);

    return 0;
}