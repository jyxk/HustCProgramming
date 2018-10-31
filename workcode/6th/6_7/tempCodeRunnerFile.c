#include<stdio.h>
#include<string.h>

void reverse(char *string, int length);

int main(void){

	char num1[50] = {}, num2[50] = {}, sum[55] = {};
	int length1, length2, length3;
	int acc = 0;
	int i, bit;

	printf("please input a addition expression(^z to quit)");

	while(scanf("%s %s", num1, num2) != EOF){

		for (int j = 0; j < 55; j++)
			sum[j] = 0;

		length1 = strlen(num1);
		length2 = strlen(num2);
		reverse(num1, length1-1);
		reverse(num2, length2-1);

		//printf("%s %s", num1, num2);
		for (i = 0; i < length1 && i < length2; i++){
			if(num1[i] == '.'){
				sum[i] = '.';
			}
			else{
				bit = num1[i] + num2[i] - 2 * '0' + acc;
				sum[i] = bit % 10 + '0';

				if(bit<10)
					acc = 0;
				else
					acc = 1;
			}

	}

		if(i < length1)
			for (; i < length1; i++){
				bit = num1[i] - '0' + acc;
				sum[i] = bit % 10 + '0';
				if(bit<10)
					acc = 0;
				else
					acc = 1;
			}



		if(i < length2)
			for (; i < length2; i++){
				bit = num2[i] - '0' + acc;
				sum[i] = bit % 10 + '0';
				if(bit<10)
					acc = 0;
				else
					acc = 1;
			}


		if(acc == 1)
			sum[i++] = '1';

		sum[i] = '\0';

		length3 = strlen(sum);
		reverse(sum, length3 - 1);

		printf("%s\n", sum);
		
	}

	return 0;
}

void reverse(char *string, int length){
	for (int i = 0; i <= length; i++, length--){
		char tempc = string[i];
		string[i] = string[length];
		string[length] = tempc;
	}
}