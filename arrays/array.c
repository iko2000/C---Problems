 #include <stdio.h>

 int N = 10;

 int main () {

    int arr[N];
    int exmp[5] = {1, 2, 3, 4, 5};
    int example[] = {1,2,3,4,5};
    int example2[] = { 4,5,6};

    for(int i = 0; i <= N; i++) {
     arr[i] = i;
    }

       for(int f = 0; f <= N; f++){ 
         
        if(f % 2 != 0){
        printf("%d\n", arr[f]);
        }
    }


    return 0;
 }