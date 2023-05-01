//Preston DeShazo
//1122965
#ifndef POINT_H
#define POINT_H

namespace deshazo_preston
{
class point
{
    public:
        //point();
        point(double x_ = 0, double y_ = 0);
        double getx() const;
        double gety() const;

    private:
        double x, y;

};
}
#endif