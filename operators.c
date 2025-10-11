#include <stdio.h>
#include <string.h>


int main () {


   int i = 5;
   int var = sizeof(i++);
    char var1[100] = "Iviko";  // Use array with enough space
    char* var2 = "Shengelia";
    
    
    printf("%s\n", var1);  // Output: IvikoShengelia

    int ex = 10;

    switch (ex) {
        case 10: printf("one\n");
        break;
        default: printf("default\n");   
    }



   printf("The size : %d\n and the number is: %d\n", var, i);

    return 0;
}