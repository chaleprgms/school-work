/****************************************************
 Lab 3: Algorithms
 
 Programmer: Cody Hale
 
 Due Date: Feb 8th, 2020
 
 CSC 130 Spring 2020
 
 I pledge I neither gave nor recieved unauthorized aid on this program.
 
 ****************************************************/

#include <stdio.h>

int main(){

    int carOneCost = 10000 + (300000/32) * 3;
    int carTwoCost = 7000 + (300000/25) * 3;
    int carThreeCost = 30000 + (300000/25) * 3;

    printf("Over 10 years, the $10,000 car cost %.2d$ to operate\n", carOneCost);
    printf("Over 10 years, the $7,000 car cost %.2d$ to operate\n", carTwoCost);
    printf("Over 10 years, the $30,000 car cost %.2d$ to operate\n", carThreeCost);

    return 0;

}