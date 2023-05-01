//Preston DeShazo
//1122965
#include "point.h"
#include <cmath>
namespace deshazo_preston
{
point::point(double x_, double y_)
{
    x = x_;
    y = y_;
}

    double point::getx() const
{
    return x;
}
    double point::gety() const
{
    return y;
}
}