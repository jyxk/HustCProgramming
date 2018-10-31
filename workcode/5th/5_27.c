#include<stdio.h>
#define TRUE 1
#define FALSE 0
#define MAX 8

void print(char queen[]);
int judge(int index);

static char queen[MAX] = {};
static int counter = 0;

int main(void){

    judge(0);
    printf("there are totally %d solutions\n", counter);

    return 0;
}

void print(char queen[]){
    printf("The %dth solution:\n****************\n", counter);
    for (int i = 0; i < 8; i++){
        for (int j = 0; j < queen[i]; j++)
            printf("# ");

        printf("Q ");

        for (int j = queen[i] + 1; j < 8; j++)
            printf("# ");

        printf("\n");
    }
    printf("****************\n");
}

int judge(int index){
    
    if(index == MAX){
        counter++;
        print(queen);
        return TRUE;
    }
    for (int i = 0; i < MAX; i++){
        int flag = TRUE;
        
        queen[index] = i;//将index行的后移动到第i列位置，(index, i)
        for (int j = 0; j < index; j++){//j是行数
            if(queen[j] == queen[index] ||
            (index - j) == (queen[index] - queen[j]) || 
            (j - index) == (queen[index] - queen[j])){
                flag = FALSE;//判断是否有必要递归
                break;
            }
        }

        if(flag)
            judge(index + 1);
    }
}