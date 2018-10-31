#include<stdio.h>
#define CHANGE 0

int main(void){
    char c;
    while((c = getchar()) != EOF){
#if CHANGE
            if(c >= 'A' && c <= 'Z')
                printf("%c", c  + 32);
            else if(c >= 'a' && c <= 'z')
                printf("%c", c - 32);
            else
                putchar(c);
#else 
            printf("%c", c);
#endif
    }
    return 0;
}