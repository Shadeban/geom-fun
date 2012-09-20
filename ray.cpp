//ray.cpp the Ray class stores a point of origin and a direction vector (point scaled to unit 
//length
//jweid 9/19/2012
#include "point.h"
#include <cmath>

class Ray{
	const Point * origin;
	const Point * dir;
	public:
	Ray(const Point& origin, const Point& dir) {
		this->origin = new Point(origin.getX(), origin.getY(), origin.getZ()); 
		Point newDir = dir / std::sqrt(dir.dot(dir));
		this->dir = new Point(newDir.getX(), newDir.getY(), newDir.getZ());
	}
	~Ray(){
		delete dir;
		delete origin;
	}
	Point getOrigin(void) const {
		return *origin;
	}	
	Point getDir(void) const {
		return *dir;
	}
};
//int main(int argv, char** argc){
//	cout << sizeof(Ray) << endl;
//	Ray ray(Point(0,0,0), Point(1,1,1));
//	cout << ray.getDir().getX() << endl;
//	return 0;
//}
