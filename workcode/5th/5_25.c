#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#define MAXSTU 100

void sort(char name[][20], int mark[], int num);
void swap(int *a, int *b);
void swaps(char *a, char *b);
int BinarySearch(int a[], int x, int n);

int main(void){
    char name[MAXSTU][20];
    int mark[MAXSTU];
    int num;
    char option = 0;
    int n;
    int searchmark;
    int index;

    printf("Please input name and grade like this\nxiaoming 59\n");
    for (num = 0; scanf("%s %d", name[num], &mark[num]) != EOF; num++)
        ;

    sort(name, mark, num-1);

    do{
        option = 0;
        fflush(stdin);
        printf("****************\nwhat do you want?\n");
        printf("1.print list\n2.search\nq to quit\n****************\n");
        option = getchar();

        if(option == '1')
            for(n = 0; n < num; n++)
                printf("%s %d\n", name[n], mark[n]);
        else if(option == '2'){
            printf("input a mark\n");
            scanf("%d", &searchmark);
            index = BinarySearch(mark, searchmark, n);
            if(index != -1)
                printf("find %d is %s grade\n", mark[index], name[index]);
            else
                printf("not found\n");
        }
            
    } while (option != 'q');

    return 0;
}

void sort(char name[][20], int mark[], int num){
    for (int i = 0; i < num; i++)
        for (int j = 1; j <= num - i; j++)
            if(mark[j - 1] > mark[j]){
                swap(&mark[j - 1], &mark[j]);
                swaps(name[j - 1], name[j]);
            }
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

void swaps(char *a, char *b){
    char *temp = malloc(sizeof(char*));
    strcpy(temp, a);
    strcpy(a, b);
    strcpy(b, temp);
}

int BinarySearch(int a[], int x, int n){
    int front = 0, back = n - 1, middle;
    while(front<=back){
        middle = (front + back) / 2;
        if(x < a[middle])
            back = middle - 1;
        else if(x>a[middle])
            front = middle + 1;
        else
            return middle;
    }
    return -1;
}