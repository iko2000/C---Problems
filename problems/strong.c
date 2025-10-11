#include <stdio.h>
#include <math.h>

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;  // Reduce the number by a factor of ten
        count++;   // Increment count for each reduction
    }
    return count;
}

long int factorialCalculator (int n ) {
        if(n < 1) return 1;
        long int total = 1;
        int jcounter = n;
        int j;

        for(j = 0; j < jcounter; j++){
            total *= n;
            n--;
        }

        return total;
}

int main () {


    int inp;

    printf("Please input the number to determine armstrong number\n");

    scanf("%d", &inp);

    int length = countDigits(inp);

    int i;
    long int total = 0;
    int count;
    int value = inp;
    long int h = factorialCalculator(5);


    for(i = 0; i <= length && value > 0; i++){
    
       int digit = value % 10;
        total += factorialCalculator(digit);
        value = value / 10;
    }

    if(total == inp){
        printf("Number is Strong !");
    } else {
        printf("Number is not strong !");
    }


    return 0;
}