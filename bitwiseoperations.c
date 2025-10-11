#include <stdio.h>

const char* namer() {
    return "iviko\n";
}

const int randomNumber(){
    printf("I am inside the function\n");
    return 4;
}
int main () {

    int a = 20;
    int b = 5 , c = 10, d = 8;
    char f[50] = "f\n";
    // b = 0000 0101
    // c = 0000 1010
    // d = 0000 1000

    const char* val = namer();
    const int val2 = randomNumber();

    // potential answer of c | d = 0000 1010 === 10.
  

    printf("Race condition %d\n", 2 + 3 * 5);

    // 15 = 0000 1111


    printf("The bitwise operation %d\n", c | d);
    printf("Boolean %d", 1 ? 5 : 6);
    // a = 0000  0011
    // 10 = 0000 0110 
    //  20  =  0000 1100
    //
    printf("Number %d\n", a >> 2);

    return 0;
}