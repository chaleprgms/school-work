//
//  CSC-210 DL01  Programming with C++
//  Programming Project-1
//
//  Created by George Cardwell
//  Date: 5/17/20.
//
//  Description:  This program defines an integer array and
//                initializes its values to 0.  The program then
//                then initials each value in the array to a
//                random number be tween 1 snd 100.  The program
//                then displays the array again.
//

#include <iostream>
#include <iomanip>
#include <array>
#include <time.h>
#include <stdlib.h>
using namespace std;

int main() {
    cout << "----------------------------------------------------" << endl;
    cout << "| Example program displaying elements of an array. |" << endl;
    cout << "----------------------------------------------------" << endl << endl;
    // n is an array of 5 int values
   array<int, 5> n;
   // initialize elements of array n to 0
   for (size_t i=0 ; i < n.size(); ++i) 
   {
       n[i] = 0; // set element at location i to 0
   }

   cout << "Element" << setw(10) << "Value" << endl;

   // output each array element's value
   for (size_t j=0; j < n.size(); ++j) 
   {
      cout << setw(7) << j << setw(10) << n[j] << endl;
   }
    cout << endl;
    // Set the elements in the array to random Variables
    srand((unsigned int)time(NULL));
    for (size_t i=0; i < n.size(); ++i) 
    {
       n[i] = rand() % 100 +1; // set element at location i to 0
    }
    // output each array element's value
    for (size_t j=0; j < n.size(); ++j) 
    {
        cout << setw(7) << j << setw(10) << n[j] << endl;
    }
    cout << endl;
    while(1);
}
