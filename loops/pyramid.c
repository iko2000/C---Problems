#include <stdio.h>


int main () {

 
    int i;
    int j;
    int n = 3;
    for(i = 1; i <= n; i++){
        for(j = 1; j <= 2*n - 1; j++){

            if(j >= n-(i - 1) && j <= n+(i-1)){
               printf("*");
               printf("%d", i);
               printf("%d", j);

            } else {
                printf(" ");
            }

        }
         printf("\n"); 
    }

    return 0;
}