#include "triangle.h"



Triangle::Triangle(const Point& v0, const Point& v1, const Point& v2){
	this->vertex = new Point*[3];
	vertex[0] = new Point(v0);
	vertex[1] = new Point(v1);
	vertex[2] = new Point(v2);
	this->norm = new Point((*vertex[1]-*vertex[0]).cross(*vertex[2] - *vertex[0]));
}
Triangle::~Triangle(void){
	delete norm;
	delete vertex[2];
	delete vertex[1];
	delete vertex[0];
	delete [] vertex;
}


