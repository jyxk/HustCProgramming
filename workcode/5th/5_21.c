#include <stdio.h>
#define M 10
#define N 3
#define OUT -1

int main(void)
{
    int a[M], b[M]; /* 数组a存放圈中人的编号，数组b存放出圈人的编号 */
    int count = M;
    int luckydog; 

    for (int i = 0; i < M; i++) /* 对圈中人按顺序编号1—M */
        a[i] = i + 1;

    int m = 0, j = 0;//m与下文k皆用于标识a数组下标

    while(count){
        int k = 1;

        while(k != N || a[m%M]==OUT)//模运算可达到使下标达到最大后自动从头开始
            if(a[m++%M]!=OUT)
                k++;

        b[j++] = a[m % M];
        a[m % M] = OUT;

        if(count == 1)
            for (int i = 0; i < M; i++)
                if(b[i] != OUT)
                    luckydog = b[i];
        
        count--;
    }

    for (int i = 0; i < M; i++) /* 按次序输出出圈人的编号 */
        printf("%6d", b[i]);
    printf("\nLuckydog is %6d\n", luckydog); /* 输出圈中最后一个人的编号 */
    return 0;
}
