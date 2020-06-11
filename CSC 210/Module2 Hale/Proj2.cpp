/*
     Proj2

     Temperature Conversion Menu Program

     Cody Hale 
     
     CSC 210

     6/1/20

*/

#include<iostream>

using namespace std;

int main(){

    // Set our sentinel to true to start menu loop
    bool sentinel = true;

    // Declares input variables
    double temp;
    char choice;


    while(sentinel){
        
        // Handles tempurature input
        cout << endl << "Enter a temperature (-999 to exit): " << endl;
        cin >> temp;


        
        if(temp == -999){

            // Closes loop upon temp entry to avoid forcing users through loop when they wish to exit
           sentinel = false;
        }else if(temp != -999){

            // Handles Unit Input
            cout << "Enter unit (F or C): " << endl;
            cin >> choice;

            // Forces case to lower
            choice = tolower(choice);


            if(choice == 'f'){

                    // Converts temperature from F to C
                    double convC = (temp - 32) *  (5/9);
                    cout << "A temperature of " << temp << " degrees Farenheight is " << convC << " degrees Celsius" << endl;

            }else if(choice == 'c'){

                    // Converts temperature from C to F
                    double convF = (temp * 9/5) + 32; 
                    cout << "A temperature of " << temp << " degrees Celsius is " << convF << " degrees Farenheight" << endl;  

            }else{
                // If entry is not C or F, force re-entry of number / unit
                cout << "Not a valid choice, retry.";
            }
        }
       
       
        
    }

}
