#include <stdio.h>


int power (int a, int b){

    if(a == 0 || a == 1){
        return 1;
    }

    int total = 1;

    for(int i = 1; i <= b; i++){
        total *= a;
    }

    return total;

}



int main () {
     
    int num1;
    int num2;

    printf("Testing the power function");
    scanf("%d", &num1);
    scanf("%d", &num2);

    printf("The result : %d", power(num1, num2) );




    return 0;
}