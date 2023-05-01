//Preston DeShazo
//1122965
#ifndef CIRCLE_H
#define CIRCLE_H

#include "point.h"

namespace deshazo_preston
{
class circle
{
    public:
        circle(point p, double r_ = 1);
        circle(double x_ = 0, double y_ = 0, double r_ = 1);
        double getx() const;
        double gety() const;
        double getr() const;
        double area();
    

    private:
        double x,y,r;
};

    bool operator ==(const circle& c1,const circle& c2);
    bool operator &&(const circle& c1,const circle& c2);
}
#endif