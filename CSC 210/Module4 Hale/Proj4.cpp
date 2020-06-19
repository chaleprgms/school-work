/*
     Proj4

     Ideal Projectile Motion Program

     Cody Hale 
     
     CSC 210

     6/19/20

*/

#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;


void printHeader(double a, double Vo, double g){

    // prints a default header to give information such as Max Height, Range, and Time of flight to the user before breaking 
    // into a second by second calculation of X and Y coordinates

    cout << "Name: Cody Hale" << endl;
    cout << "Ideal Projectile Motion" << endl;
    cout << "Intial Firing Angle: " << a << endl;
    cout << "Intial Speed: " << Vo << endl;
    
    double maxHeight = (pow((Vo * sin(a)), 2))/(2 * g);

    cout << "Maximum Height: " << maxHeight << endl;

    double tof = ((2*Vo)*sin(a))/g;

    cout << "Time of Flight: " << tof << endl;

    double range = (pow(Vo, 2)/g) * sin(2*a);

    cout << "Range: " << range << endl;


}

void calculateTrajCordinates(double a, double Vo, double g, int t, double values[]){


        // Castes 't' into a double so it can be returned with the array
        double time = (double) t;

        // Calculates our 'X' and 'Y' coordinates to return by reference
        double x = (Vo * cos(a))*t;

        double y = ((Vo * sin(a))*t)-(((1.0/2.0) * g)*pow(t,2));

        // Returns calculations at time 't' to the main function via an array
        values[0] = time;
        values[1] = x;
        values[2] = y;

}

int main(){

    bool sentinel = true;
    double a, Vo, g;
    string unit;

    while(sentinel){

        // Handles numeric input of 'a' and 'Vo'
        cout << endl << "Enter the inital angle: " << endl;
        cin >> a;

        cout << endl << "Enter the inital velocity: " << endl;
        cin >> Vo;


        // Allows user to enter desired unit
        cout << endl << "Enter unit for velocity (m/s or ft/s): " << endl;
        cin >> unit;


        // Sets gravity constant for desired unit selected above
        if(unit == "ft/s"){
            g = 32;
        }else if(unit == "m/s"){
            g = 9.8;
        }

        // Prints our header to the console

        printHeader(a, Vo, g);


        // Initalizes our array to send to calculateTrajCoordinates(), as well as calulates time of flight to iterate over our loop
        double values[3];
        double tof = ((2*Vo)*sin(a))/g;


        for(int t = 0; t < tof; t++){
            
            // Iterates over the entire TOF to the nearest whole second, calculates and returns 'X' and 'Y' coordinate to graph  trajectory

            calculateTrajCordinates(a, Vo, g, t, values);

            cout << "Time: " << values[0] << ", X-Coordinate: " << values[1] << ", Y-Coordinate:  " << values[2] << endl;
        }
        
    }

}