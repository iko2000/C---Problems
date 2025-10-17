#include <stdio.h>


int main () {
     
    int inp;

    printf("Please input the number.\n");

    scanf("%d", &inp);

    int n = 1;
    for(int i = 1; i <= inp; i++){
        printf("\n");

        for(int j = 1; j <= i; j++){
            printf("%d", n);
            n++;
        }
    }

    return 0;
}