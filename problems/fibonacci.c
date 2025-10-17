#include <stdio.h>

int fibonaccyfinder (int n) {

    int a = 0;
    int b = 1;
    int i;
    int result;
    for(i = 1; i <= n; i++){
        printf("%d \n", a);
        result = a + b;
        a = b;
        b = result;
    }

    return a;

}
int main () {

    int inp;

    printf("Please input the number\n");
    scanf("%d", &inp);

    int nvalue = fibonaccyfinder(inp);
    printf("The Sequence value in fibonnacy is: %d \n", nvalue);




    return 0;
}