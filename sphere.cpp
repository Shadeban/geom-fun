#include "sphere.h"

Sphere::Sphere(const Point& center, const double radius){
	this->center = new Point(center);
	this->radius = radius;	
}
