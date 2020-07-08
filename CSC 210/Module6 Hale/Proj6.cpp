/*
     Proj5

     Ideal Projectile Motion Program (OOP)

     Cody Hale 
     
     CSC 210

     7/7/20

*/

#include<iostream>
#include<string.h>
#include "Projectile.hpp"

using namespace std;

int main(){
        double a, Vo, g;
        string unit;

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
            g = 32.0;
        }else if(unit == "m/s"){
            g = 9.8;
        }

        // Prints our header to the console

        Projectile myProjectile(a, Vo, g);

        myProjectile.printHeader();

        double tof = myProjectile.getToF();
        int t = myProjectile.getT() + 1;
        double y = myProjectile.getY();
        double range = myProjectile.getRange();
        double getG = myProjectile.getG();
    

        while(t <= tof){
            if(t <= tof){
                myProjectile.calculateTrajCoordinate(t);
                double x = myProjectile.getX();
                y = myProjectile.getY();
                cout << "Time: " << t << ", X-Coordinate: " << x << ", Y-Coordinate:  " << y << endl;
                t++;
                if(t > tof){
                    cout << "Time: " << tof << ", X-Coordinate: " << range << ", Y-Coordinate:  0" << endl;
                }
            }  
        }

        while(1){}
        return 0;
        
}

