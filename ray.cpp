//ray.cpp the Ray class stores a point of origin and a direction vector (point scaled to unit 
//length
//jweid 9/19/2012
#include "ray.h"
#include <cmath>
#include <iostream>
Ray::Ray(const Point& origin, const Point& dir) {
	this->origin = new Point(origin.getX(), origin.getY(), origin.getZ()); 
	Point newDir = dir / std::sqrt(dir.dot(dir));
	this->dir = new Point(newDir);
}
Ray::~Ray(){
	delete dir;
	delete origin;
}
Point* Ray::getOrigin(void) const {
	return origin;
}	
Point* Ray::getDir(void) const {
	return dir;
}
Point Ray::calcPoint(double t) const {
	return *origin + (t * *dir);
}
using namespace std;
int main(int argv, char** argc){
	return 0;
}
