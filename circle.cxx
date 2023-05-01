//Preston DeShazo
//1122965
#include "circle.h"
#include <cmath>
namespace deshazo_preston
{
circle::circle(point p, double r_)
{
    x = p.getx();
    y = p.gety();
    r = r_;
}

circle::circle(double x_, double y_, double r_)
{
    x = x_;
    y = y_;
    r = r_;
}

    double circle::getx() const
{
    return x;
}
    double circle::gety() const
{
    return y;
}
    double circle::getr() const
{
    return r;
}

    bool operator ==(const circle& c1,const circle& c2)
    {
        bool checkx = (c1.getx() == c2.getx());
        bool checky = (c1.gety() == c2.gety());
        bool checkr = (c1.getr() == c2.getr());

        return checkx && checky && checkr;
    }

    bool operator &&(const circle& c1,const circle& c2)
    {
        double a = pow((c1.getr() - c2.getr()),2);
        double b = pow((c1.getx() - c2.getx()),2) + pow((c1.gety(), c2.gety()),2);
        double c = pow((c1.getr() + c2.getr()),2);

        return (a <= b ) && (b <= c);
    }

    double circle::area()
{
 double area = M_PI * (r * r);

 return area;
}
}
