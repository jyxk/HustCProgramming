#include<stdio.h>
#include<math.h>
#define BEGIN 4
#define END 20

int IsPrime(int n);

int main(void){
    int i, j, k = 0;
    printf("GOLDBACH'S CONJECTURE:\nEvery even number n>=4 is the sum of two primes.\n");
    for (j = BEGIN; j <= END; j += 2){
        for (i = 2; i < j; i++){
            if(IsPrime(i) && IsPrime(j-i))
                printf("%d = %d + %d\n", j, i, j - i);
            k++;
            if(!(k%5))
                break;
        }
    }
        return 0;
}

int IsPrime(int n){
    int i;
    if(n == 1)
        return 0;

    for (i = 2; i <= (int)sqrt(n); i++)
        if(n%i == 0)
            return 0;

        return 1;
}