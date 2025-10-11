#include <stdio.h>
#include <string.h>  


int main () {


     
    char userinput[100];


    printf("Please input your word:\n");

    scanf("%s", userinput);  

    int length = strlen(userinput);  

    int i;
    int counter = 0;
    for(i = 0; i < length; i++ ){

        if(userinput[i] == userinput[length - 1 - i]){

          counter ++;
        }
    }

    if(counter == length){
        printf("The word was palindrome.\n");
    } else {
        printf("The word was not palindrome.\n");
    }





    return 0;
}