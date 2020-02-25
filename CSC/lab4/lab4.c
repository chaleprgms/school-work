#include<stdio.h>
#define ROWS 10


int main(){

    int i, j, k, p;

    for(i=0; i < ROWS; i++){
        printf("\t");
        for(j=0; j<i;j++){
            printf("*");
        }
        printf("\n");
    }

    for(k=0; k < ROWS; k++){
        printf("\t");
        for(p=10; p>k;p--){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}