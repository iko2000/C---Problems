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

int main () {


    int inp;

    printf("Please input the number to determine armstrong number\n");

    scanf("%d", &inp);

    int length = countDigits(inp);

    int j;
    int total;
    int count = length;
    // 546
    while(count != 0){
          
        total += pow(inp % 10, length);
        printf("%d", total);
        count--;
    }



    // printf("You inputted the num: %d\n", inp);
    printf("Total is: %d\n", total);







    return 0;
}