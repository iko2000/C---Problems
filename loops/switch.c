#include <stdio.h>



int main () {


    int examplevalue = 5;


    // Similar logic to JS, The break statment will stop looping other possibilites. default is optional and can go in the begging or in the end.

    switch(examplevalue){

        default: printf("I am the default value");
        case 1: printf("The value is one");
        break;
        case 2: printf("The value is two");
        break;
        case 3: printf("The value is three");
        break;
        case 4: printf("The value is four");
        break;
        case 5: printf("The value is five");
        break;
    }


    return 0;
}