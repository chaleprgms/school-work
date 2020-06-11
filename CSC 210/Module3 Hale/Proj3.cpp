/*
     Proj3

     Easter Date Finder Program

     Cody Hale 
     
     CSC 210

     6/8/20

*/

#include<iostream>
#include<math.h>
#include<string>

using namespace std;

int main(){

    // Set our sentinel to true to start menu loop
    bool sentinel = true;

    // Declares input variables
    double Y;

    while(sentinel){
        // Handles year input
        cout << endl << "Enter a year (-1 to exit): " << endl;
        cin >> Y;


        
        if(Y == -1){

            // Closes loop upon year entry to avoid forcing users through loop when they wish to exit
           sentinel = false;

        }else if(Y != -1){

            // Algorithm to calculate the easter date for year Y

            int a = fmod(Y, 19);

            int b = Y / 100;

            int c = fmod(Y, 100);

            int d = b / 4.0;

            int e = fmod(b, 4);

            int g = ((8 * b) + 13) / 25;

            int h = fmod((((19 * a) + (b - d - g)) + 15), 30);

            int j = c / 4;

            int k = fmod(c, 4);

            int m = ((11 * h)+ a ) / 319;

            int r = fmod((2 * e + 2 * j - k - h + m + 32), 7);

            int n = ((h - m + r + 90) / 25);

            int p = fmod((h - m + r + n + 19), 32);


            // Determines if the month of easter is March or April
            string const& month = ((h + r - 7 * m + 114) / 31) == 3 ? "March" : "April";
    

            // Returns Results to the console
            cout << "For the year " << Y << " Easter falls on " << month << " " << p << "." << endl;

        }
       
        
    }

}
