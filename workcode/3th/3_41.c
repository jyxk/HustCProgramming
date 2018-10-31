#include <stdio.h>

int gcd(int x, int y);

int main(void)
{
    int x, y;
    scanf("%d%d", &x, &y);
    printf("The gcd of %d and %d is %d\n", x, y, gcd(x, y));

    return 0;
}

int gcd(int x, int y)
{
    if (x > y)
        return gcd(x - y, y);
    else if (x < y)
        return gcd(x, y - x);
    else
        return x;
}