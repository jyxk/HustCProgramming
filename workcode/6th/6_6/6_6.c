#include<stdio.h>
#define N 30
#define M 6
#define MAXNAME 20

double StuAverage(double (*grade)[M], int stunum, int subsum);
double SubAverage(double (*grade)[M], int stusum, int subnum);
int Lower(double (*grade)[M], int stusum, int subnum);
int Failed(double (*grade)[M], int stusum, int subnum);
int Excel(double (*grade)[M], int stusum, int subnum);

int main(void){
    double grade[N][M] = {};//N为最大学生数，M为最大科目数
    char subname[M][MAXNAME] = {};
    int subsum = 1, stusum = 1;
	int subnum, stunum;
    
    do{

        printf("\nPlease input the amount of subject and students:(0 to quit)");
        scanf("%d%d", &subsum, &stusum);
        if(subsum==0)
            break;

        printf("Input the names of those subs\n");
        for (int i = 0; i < subsum; i++){
            scanf("%s", subname[i]);
        }

        printf("Input the grade of every one\n");
        for (int i = 0; i < stusum; i++)
            for (int j = 0; j < subsum; j++)
                scanf("%lf", &grade[i][j]);

	    printf("Whose Average?\n");
	    scanf("%d", &stunum);
        printf("this classmate's average is%lf\n", StuAverage(grade, stunum, subsum));

		printf("Which Subject\n");
	    scanf("%d", &subnum);
	    printf("the SubAverage is %lf\n", SubAverage(grade, stusum, subnum));
	    printf("there is %d student(s) lower than the subaverage.\n", Lower(grade, stusum, subnum));
	    printf("And %d student(s) failed, %d student(s) gets a A.\n", Failed(grade, stusum, subnum), Excel(grade, stusum, subnum));

    } while (subsum);

    return 0;
}

double StuAverage(double (*grade)[M], int stunum, int subsum){
    double result, sum = 0;
    for (int i = 0; i < subsum; i++)
        sum += *(*(grade+stunum-1)+i);
    result = sum / (double)subsum;

    return result;
}

double SubAverage(double (*grade)[M], int stusum, int subnum){
    double result, sum = 0;
    for (int i = 0; i < stusum; i++)
        sum += *(*(grade+i)+subnum-1);
    result = sum / (double)stusum;

    return result;
}

int Lower(double (*grade)[M], int stusum, int subnum){
    double Average = SubAverage(grade, stusum, subnum);
    int result = 0;

    for (int i = 0; i < stusum; i++)
        if(*(*(grade+i)+subnum-1) <= Average)
            result++;

    return result;
}

int Failed(double (*grade)[M], int stusum, int subnum){
    int result = 0;

    for (int i = 0; i < stusum; i++)
        if(*(*(grade+i)+subnum-1) < 60)
            result++;
	return result;
}
int Excel(double (*grade)[M], int stusum, int subnum){
    int result = 0;

    for (int i = 0; i < stusum; i++)
        if(*(*(grade+i)+subnum-1) >= 90)
            result++;
	return result;
}