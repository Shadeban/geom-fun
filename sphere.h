
#ifndef GFSPHERE_H
#define GFSPHERE_H	
#include "point.h"
class Sphere {
	public:
	double radius;
	Point* center;	
	Sphere(const Point& center, const double radius);
	
};

#endif
