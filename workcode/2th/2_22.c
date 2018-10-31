#include <stdio.h>

int main(void){ 
    int i, n = 1, s=1, su = 1;

    printf("Please enter s:");
    scanf("%d", &s);

   for(n = 1; su < s; n++){
       su *= n;
   }
      

    printf("n=%d", n-1);

    return 0;
}
