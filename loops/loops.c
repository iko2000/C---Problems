#include <stdio.h>


int main() {


    // While loop.
    int initialvalue = 10;
    while(initialvalue > 1){
         
        initialvalue--;
        printf("The value is %d\n", initialvalue);
    }


    // For loop 
    int i;
    for( i = 0; i < 10; i++ ){
        printf("The value of  I is  %d\n", i);
    }

    // do while

    int var = 5;

    do {
        printf("Do whilte loops print %d\n", var);
        var--;
    } while (var > 1);



    // int n;
    
    // printf("Please enter the number");
    // scanf("%d", &n);

    // while(n > 5){
    //     if(n == 10){
    //         printf("We are leaving the loop !");
    //         break;
    //     }
    // printf("Please enter the number");
    // scanf("%d", &n);
    // }


    // while loop example.

    int g;

    for(g = 0; g < 20; g++){
        printf("The value in loop on start %d\n", g);

        switch(g){

            case 0: g += 5;
            break;
            case 1: g += 10;
            break;

            default: g += 20;
            break;
        }

        printf("The value in loop %d\n", g);
    }


    return 0;
}