#include <stdio.h>

int main(void){
    int num;
    char bit[33] = {};
    bit[32] = '\0';

    scanf("%d", &num);
    for (int i = 31; i >= 0; i--)
    {
        bit[i] = (num % 2) + '0';
        num /= 2;
        }

    printf("%s\n", bit);

    return 0;
}