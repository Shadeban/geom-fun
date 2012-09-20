#include "triangle.h"



Triangle::Triangle(const Point& v0, const Point& v1, const Point& v2){
	this->points = new Point*[3];
	points[0] = new Point(v0);
	points[1] = new Point(v1);
	points[2] = new Point(v2);
	this->norm = new Point((getVertex(1)-getVertex(0)).cross(getVertex(2) - getVertex(0)));
}
Triangle::~Triangle(void){
	delete norm;
	delete points[2];
	delete points[1];
	delete points[0];
	delete [] points;
}

Point Triangle::getVertex(int i) const{
	return *points[i];
}

Point Triangle::getNorm(void) const{
	return *norm;
}

