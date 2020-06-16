/*
     Proj4

     Ideal Projectile Motion Program

     Cody Hale 
     
     CSC 210

     6/15/20

*/

#include<iostream>
#include<math.h>
#include<string.h>

using namespace std;


void printHeader(double a, double Vo, double g){
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

double * calculateTrajCordinates(double a, double Vo, double g, int t){

        cout << a << endl;
        cout << Vo << endl;
        cout << g << endl;
        cout << t << endl;

        double time = (double) t;

        double x = (Vo * cos(a))*t;

        double y = ((Vo * sin(a))*t)-((1/2)*g*pow(t,2));

        double values[] = {time, x, y};

        
        cout << values[0] << " " << values[1] << " " << values[2] << endl;
        cout << "retruning traj values" << endl;
        return values;


}

int main(){

    bool sentinel = true;
    double a, Vo, g;
    string unit;

    while(sentinel){
        cout << endl << "Enter the inital angle: " << endl;
        cin >> a;

        cout << endl << "Enter the inital velocity: " << endl;
        cin >> Vo;


        cout << endl << "Enter unit for velocity (m/s or f/s): " << endl;
        cin >> unit;

        if(unit == "f/s"){
            g = 32;
        }else if(unit == "m/s"){
            g = 9.8;
        }


        printHeader(a, Vo, g);

        cout << a << endl;
        cout << Vo << endl;
        cout << g << endl;

        double tof = ((2*Vo)*sin(a))/g;
        cout << tof << endl;

        for(int t = 0; t < tof; t++){
            
            cout << "Before Traj Method" << endl;

            double *value = calculateTrajCordinates(a, Vo, g, t);

            cout << "Out of Traj Method" << endl;
            while(1){}

            cout << "Time: " << value[0] << "  " << value[1] << "  " << value[2] << endl;
        }
        
    }

}