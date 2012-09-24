#ifndef GFTRIANGLE_H
#define GFTRIANGLE_H	
#include "ray.h"
class Triangle {
	public:
	Point** vertex;
	Point* norm;	
	Triangle(const Point& v0, const Point& v1, const Point& v2);
	~Triangle(void);
	
};

#endif
