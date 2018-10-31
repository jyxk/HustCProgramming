#include<stdio.h>

int pascalT(int i, int j);
//该函数输出杨辉三角中的第i行第j个，从0开始计数

int main(void){

    for(int i = 0, k = 18; i < 10; i++, k-=2){
            for (int l = k; l >= 0; l--)
                putchar(' ');

            for (int j = 0; j < 10; j++)
            {
                if (pascalT(i, j))
                    printf("%3d ", pascalT(i, j));
                else
                    printf(" ");
            }
        putchar('\n');
    }
    

    return 0;
}

int pascalT(int i, int j){
    if(j == 0)
        return 1;
    else
        return pascalT(i, j-1)*(i-j+1)/j;//使用递归
}