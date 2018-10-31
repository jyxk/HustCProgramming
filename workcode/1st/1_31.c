#include <stdio.h>
int main(void){

    char c;
    printf("Input a letter please:");
    scanf("%c", &c);
    if(c <= 90 && c >= 65)
        printf("%c", (c+32));
    else
        printf("%c", c);
    return 0;
}