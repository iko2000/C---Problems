#include <stdio.h>


int main () {

    int inp;

    printf("Please input the number to determine  if the number is Prime\n");

    scanf("%d", &inp);

    
    int counter = 1; // cause every number is divisble by itself.

    if(inp <= 1) {
     printf("Number is equal or less than 1.");
    } else {
         

    int j = 0;
    int dividedNumber = 0; // This is not exact, but still it will work as mathematically that is right.
    int num = 0;

    if(inp % 2 != 0){
        dividedNumber = inp / 2 + 1;
        num = inp / 2 + 1;
    } else {
        dividedNumber = inp / 2;
        num = inp / 2;
    }



    while (j <= dividedNumber && num >= 1) {
         
        if(inp % num == 0) {
            counter++;
        }
        num--;
        j++;
    }

    }

    printf("The total number of divisors is: %d\n", counter);

    if(counter > 2){
        printf("The number is not Prime.");
    } else {
        printf("The number is Prime.");
    }



    return 0;


}