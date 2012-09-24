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
Point* Point::setX(double inX){
	x = inX;
	return this;
}
Point* Point::setY(double inY){
	y = inY;
	return this;
}
Point* Point::setZ(double inZ){
	z = inZ;
	return this;
}


