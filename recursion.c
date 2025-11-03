#include <stdio.h>


int func1 (int x) {

    if(x == 0){
        return 0;
    }

    return x + func1(x - 1);
}

int factorial (int x){

    if(x == 1) {
        return 1;
    } else {
        return x * factorial(x - 1);
    }
}


int main () {

    int x = 10;

    printf("%d", factorial(x));



    return 0;
}