#include<stdio.h>

int main(void){
    long int l = 0xabcd1234;
    char *c = (char *)&l;
    char ch[8];
    for (int i = 0; i < 8; i+=2){
        ch[i] = (*c & 0xf0) >> 4;
        ch[i + 1] = *c & 0xf;
        *(c++);
    }

    for (int i = 0; i < 8; i++){
        if(ch[i] >= 0 && ch[i] <= 9)
            printf("%c ", ch[i] + '0');
        else if(ch[i] >= 0xa && ch[i] <= 0xf)
            printf("%c ", ch[i] + 'a' - 10);
    }
        

        return 0;
}