#include <stdio.h>


// BINARY TO DECIMAL.

int decimalNumDeterminer (int n) {
  
    int counter = 0;
    while(n != 0){
    
        n /= 10;
        counter++;
    }
    return counter;
}

// has to return n powers 
int twoPowers (int n) {

    int ret = 2;
    for(int i = 2; i <= n; i++){
        
      ret *= 2;

    }
    
    return ret;
}

int main () {


    int inp;

    printf("Please input the binary, which will be converted to Decimal\n");

    scanf("%d", &inp);

    printf("Testing the Binary converstion %d\n", decimalNumDeterminer(inp));

    
    int output = 0;

    int bin = inp;

    for(int i = 0; i < decimalNumDeterminer(inp) && bin != 0; i++){

        int digit = bin % 10;
        if(i == 0 && digit != 0) 
        {
            output += 1;
        } else {
        if(digit != 0) output += digit * twoPowers(i);

        }
        
        printf("%d Digits\n", digit);
        bin /= 10;


    }

    printf("Output is: %d\n", output);

    return 0;
}