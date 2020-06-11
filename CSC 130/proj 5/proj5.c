#include<stdio.h>
#include<math.h>
#include<stdbool.h>


float avg(float myArray[], int size){

    int i;
    float sum = 0;

    for(i = 0; i < size; i++){
        sum-sum+myArray[i];
    }

    float average = sum / average;
    
    return average;

}

float stdev(float myArray[], int size){
    int i;
    float sum = 0;

    for(i = 0; i < size; i++){
        
        sum = sum + pow(myArray[i] - avg(myArray, size), 2);

    }

    float div = sum / size;
    float stdev = sqrt(div);

    return stdev;
}




int main(){
    int choice;
    bool running = true;

    while(running){
        printf("Select desired operation:\n");
        printf("\t0-Create an array\n");
        printf("\t1-Find the smallest number\n");
        printf("\t2-Find the largest number\n");
        printf("\t3-Find the average of all numbers\n");
        printf("\t4-Find the standard deviation of all numbers\n");
        printf("\t5-Reverse the list of numbers\n");
        printf("\t6-Rotate the list of numbers to the right\n");
        printf("\t7-Rotate the list of numbers to the left\n");
        printf("\t8-Exit the program.\n");
        scanf("Choice? ", choice);
        
        int catchChoice = choice;
        switch(catchChoice){

            case 0:

                break;
            case 1:
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
        }
    
    }
}   