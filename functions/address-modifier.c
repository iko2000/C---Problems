#include <stdio.h>

// normal

int nfunc (int num1, int num2){


    num1 = 55;
    num2 = 60;
    return 0;
}





// Address changers

int func (int *num1, int *num2){

    *num1 = *num2;
    return 0;
}

int main () {

    int a = 5;
    int b = 10;
    int c = 25;
    int d = 50;


    func(&a, &b);
    nfunc(c, d);

    printf("%d %d %d %d", a, b, c, d);


    return 0;
}