/****************************************************
 Project 2: slope_program_hale.c
 
 Programmer: Cody Hale
 
 Due Date: Feb 8th, 2020
 
 CSC 130 Spring 2020
 
 I pledge I neither gave nor recieved unauthorized aid on this program.

 Description


 Inputs:
 
 Outputs:
 
 ****************************************************/

#include <stdio.h> 


int main(){
    double x1, x2, y1, y2, x3, m, b;


    
    printf("Enter X1: ");
    scanf("%d", x1);
    
    printf("\nEnter y1: ");
    scanf("%d", y1);
    
    printf("\nEnter X2: ");
    scanf("%d", x2);
    
    printf("\nEnter Xy: ");
    scanf("%d", y2);

    m = (y2-y1)/(x2-x1);

    b = ((m * x1)-y1)/-1;

    printf("\nYour slope is:  %.5f", m);

    printf("\nYour Y-Intercept is: %.2f\n", b);

    printf("\nYour line equation is: y = %.2f * x + %.2f\n", m, b);

    printf("\nEnter X3: ");
    scanf("%d", x3);

    double y3 = (m * x3) + b;
    
    printf("Your y3 cordinate is: %.2f", y3);
    
    while(1){}

}