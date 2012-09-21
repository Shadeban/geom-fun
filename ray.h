#ifndef GFRAY_H
#define GFRAY_H
#include "point.h"
class Ray{
	Point * origin;
	Point * dir;
	public:
	Ray(const Point& origin, const Point& dir); 
	~Ray(void);	
	Point* getOrigin(void) const ;	
	Point* getDir(void) const ;
	Point calcPoint(double) const ;
};

#endif
