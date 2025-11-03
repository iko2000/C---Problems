#include <stdio.h>



int main () {


    int dim[5][5] = {
        {1, 2, 3, 4, 5},
        {6, 7, 8, 9, 10},
        {11, 12, 13, 14, 15},
        {16, 17, 18, 19, 20},
        {21, 22, 23, 24, 25} 
    };

    int rowsum = 0;
    int colsum = 0;

    for(int i = 0; i < 5; i++){

        for(int j = 0; j < 5; j++){
            if(j == 0){
            rowsum += dim[i][j];
            }
        }
        printf("\n");
    }
    printf("Sum of diagonal elements: %d\n", rowsum);
    printf("Sum of diagonal elements: %d\n", colsum);
    return 0;
}