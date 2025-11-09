#include <stdio.h>

int sum(int a, int b) {


    return a + b;
}


int main () {


    int (*f)(int, int) = &sum;

    printf("The summing with pointer only %d", f(5,6));

    return 0;

}