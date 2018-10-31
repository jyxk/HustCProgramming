#include <stdio.h>

char *strcpyi(char *s,char *t);
int main(void)
{
    char a[20],b[60]="there is a boat on the lake.";

    printf("%s\n",strcpyi(a, b));

    return 0;
}

char *strcpyi(char *s,char *t)
{
    //char *a = s;
    while(*s++=*t++)
        ;
    return (s);
}
