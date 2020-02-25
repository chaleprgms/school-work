#include <stdio.h>

#define SIZE 10


int main(){
    int a[SIZE];
    int b[SIZE];
    double ratio[SIZE];

    int i;
    
    for(i = 0; i < SIZE; i++){
        b[i] = 0;
    }

    
    for(i = 0; i < SIZE; i++){
        ratio[i] = 0;
    }


    for(i = 0; i < SIZE; i++){
        a[i] = i;
    }

    for(i = 0; i < SIZE; i++){
        b[SIZE - i] = a[i];
    }


    for(i = 0; i < SIZE; i++){

        ratio[i] = a[i]/(double) b[i];

    }


    for(i = 0; i < SIZE; i++){

        printf("ratio[%d] = %f\n", i, ratio[i]);

    }

    return 0;

}