// Point.cpp, a class for storing basic 3-dimensional (X,Y,Z) coordinates in double precision,
// providing basic arithmetic operators
// jweid 9/19/2012 
#include "point.h"



Point::Point(double inx, double iny, double inz){
	x = inx;
	y = iny;
	z = inz;
}

double Point::getX(void) const{
	return x;
}
double Point::getY(void) const{
	return y;
}
double Point::getZ(void) const{
	return z;
}
double Point::dot(const Point& rhs) const{
	return x*rhs.getX() + y * rhs.getY() + z * rhs.getZ();
}
Point Point::cross(const Point& rhs) const{
	return Point(y*rhs.getZ() - rhs.getY() * z,\
			z*rhs.getX() - rhs.getZ() * x,\
			x * rhs.getY() - rhs.getX() * y);
}

