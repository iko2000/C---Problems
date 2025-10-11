#include <stdio.h>


int area(int a,int b)  {


    return a * b;
}
static int dummy;
int main() {

    int a,b;
    int c  =  5;

    int *g = &c;

    int d = 6, f = 7;

    printf("Register  %p\n", g);
   
    printf("Bitwise %d", d | f);
    printf("Logical %d", d || f);


    if(c > 3 &&  c != 4){
        printf("Inside the block");
    }

    c++;

    printf("The area is %d", c);
    
    return 0;
}

