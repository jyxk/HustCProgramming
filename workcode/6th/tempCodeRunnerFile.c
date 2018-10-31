#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void fvc(char *a);

int main(void){

    char a[100];

    while(gets(a))
        fvc(a);

    return 0;
}

void fvc(char *a){
    
    char *ch;
    int flag = 1;
    
    if(strlen(a) == 0)
        return;

        for (ch = a; *ch; ++ch){
            if (*ch == '\n')
                return;
            else if (*ch != ' ' && *ch != '\t' && *ch != '\n'){
                putchar(*ch);
                flag = 1;
            }
            else if (flag == 1){
                putchar(' ');
                flag = 0;
            }
        }
        putchar('\n');

}