#include "Projectile.hpp"
#include <math.h>
#include <iostream>
using namespace std;


Projectile::Projectile(){
    // Default entries in m/s
    angle = 45;
    Vo = 20;
    g = 9.8;
    t = 0;
    x = 0;
    y = 0;
    maxY = (pow((Vo * abs(sin(angle))), 2))/(2 * g);
    ToF = ((2*Vo)*abs(sin(angle)))/g;
    range = (pow(Vo, 2)/g) * sin(2*angle);

}

Projectile::Projectile(double aVal, double inputVo, double gVal){
    angle = aVal;
    Vo = inputVo;
    g = gVal;
    t = 0;
    x = 0;
    y = 0;
    maxY = (pow((Vo * abs(sin(angle))), 2))/(2 * g);
    ToF = ((2*Vo)* abs(sin(angle)))/g;
    range = (pow(Vo, 2)/g) * abs(sin(2*angle));
}


void Projectile::printHeader(){

    // prints a default header to give information such as Max Height, Range, and Time of flight to the user.

    cout << "Name: Cody Hale" << endl;
    cout << "Ideal Projectile Motion" << endl;
    cout << "Intial Firing Angle: " << angle << endl;
    cout << "Intial Speed: " << Vo << endl;
    cout << "Maximum Height: " << maxY << endl;
    cout << "Time of Flight: " << ToF << endl;
    cout << "Range: " << range << endl;
    cout << "--------------------------------" << endl;

}



void Projectile::calculateTrajCoordinate(int t){
    
    double time = (double) t;

    // Calculates our 'X' and 'Y' coordinates to return by reference
    x = (Vo * abs(cos(angle)))*time;

    y = ((Vo * abs(sin(angle)))*time)-(((1.0/2.0) * g)*pow(time,2));

}
    






// Getters for private variables
double Projectile::getAngle(){
    return angle;
}

double Projectile::getVo(){
    return Vo;
}

double Projectile::getG(){
    return g;
}

double Projectile::getX(){
    return x;
}

double Projectile::getY(){
    return y;
}

double Projectile::getRange(){
    return range;
}

double Projectile::getToF(){
    return ToF;
}

double Projectile::getMaxY(){
    return maxY;
}

int Projectile::getT(){
    return t;
}



// Setters for all private variables
void Projectile::setAngle(double input){
    angle = input;
}

void Projectile::setVo(double input){
    Vo = input;
}

void Projectile::setG(double input){
    g = input;
}

void Projectile::setX(double input){
    x = input;
}

void Projectile::setY(double input){
    y = input;
}

void Projectile::setRange(double input){
    range = input;
}

void Projectile::setToF(double input){
    ToF = input;
}

void Projectile::setMaxY(double input){
    maxY = input;
}

void Projectile::setT(double input){
    t = input;
}