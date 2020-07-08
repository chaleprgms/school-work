#include<math.h>

class Projectile{

    public:
        

        Projectile();

        Projectile(double a, double Vo, double gVal);

        void printHeader();

        void calculateTrajCoordinate(int);


        void setAngle(double);
        void setVo(double);
        void setG(double);
        void setX(double);
        void setY(double);
        void setRange(double);
        void setToF(double);
        void setMaxY(double);
        void setT(double);

        double getAngle();
        double getVo();
        double getG();
        double getX();
        double getY();
        double getRange();
        double getToF();
        double getMaxY();
        int getT();



    private:
        double angle, Vo, g, x, y, range, ToF,  maxY;
        int t;
    
};