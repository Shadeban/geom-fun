#ifndef GFTRIANGLE_H
#define GFTRIANGLE_H	
#include "ray.h"
class Triangle {
	Point** points;
	Point* norm;	
	public:
	Triangle(const Point& v0, const Point& v1, const Point& v2);
	~Triangle(void);
	Point getVertex(int) const;
	Point getNorm(void) const;
	
};

#endif
