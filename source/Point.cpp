#include "include/Point.hpp"

Point::Point(float px, float py, float pz) 
{
    x=px;
    y=py;
    z=pz;
}
Point Point::operator+(const Point &p) 
{
    return Point(x+p.x, y+p.y, z+p.z);
}
Point Point::operator-(const Point &p) 
{
    return Point(x-p.x, y-p.y, z-p.z);
}
void Point::normalize() 
{
    float d = std::sqrt(x*x+y*y+z*z);
    x = x/d;
    y = y/d;
    z = z/d;
   
}