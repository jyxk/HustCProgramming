#include<stdio.h>
#include<string.h>

void strnins(char s[], char t[], int n);

int main(void){
    char s[1000] = {}, t[1000] = {};
    int n;

    scanf("%s %s %d", s, t, &n);

    strnins(s, t, n);

    printf("%s\n", s);

    return 0;
}

void strnins(char s[], char t[], int n){
    char temp;
    for (int i = strlen(t); i; i--)
        for (int i = strlen(s); i > n-1 ; i--)
            s[i + 1] = s[i];

    for (int i = 0; t[i]; i++){
        s[n + i] = t[i];
    }
}