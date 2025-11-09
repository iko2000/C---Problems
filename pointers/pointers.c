#include <stdio.h>



int main () {


    int a[][3] = {1,5,3,4,5,6};


    // int (*ptr)[3] = a;

    int *pon = &a[0][0];
    
     *pon = 10;


    // printf("%d", (*ptr)[1]);
    printf("%d", *pon);




    return 0;
}