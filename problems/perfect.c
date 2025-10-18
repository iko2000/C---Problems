#include <stdio.h>


int main () {



    int inp;

    printf("Please enter the number\n");

    scanf("%d", &inp);
    
    int result = 0;

    for(int i = 1; i < inp; i++){

        if(inp % i == 0){
            result += i;
        }


    }

    printf("%d", result);
    if(result == inp){
        printf("The number is Perfect number\n");
    } else {
        printf("The number is not Perfect number\n");

    }


    return 0;
}