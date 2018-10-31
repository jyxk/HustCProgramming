#include<stdio.h>
#include<string.h>

int main(void){

    char ch;
    int flag = 1;
    while((ch = getchar()) != EOF){
       if(ch != ' ' && ch != '\t'){
           putchar(ch);
           flag = 1;
       } 
       else if(flag == 1){
           putchar(' ');
           flag = 0;
       }
    }
    return 0;
}