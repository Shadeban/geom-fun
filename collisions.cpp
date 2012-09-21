#include "collisions.h"

bool collides(const Ray& ray, const Triangle& triangle, Point* intersection){
	bool intersectsPlane = collides(ray, triangle.getVertex(0), triangle.getNorm(), intersection);

}


bool collides(const Ray& ray, const Point& planePoint, const Point& planeNorm, Point* intersection){
	double numerator, denominator, time;
	denominator = ray.getDir().dot(planeNorm);
	if (denominator == 0) return false;
	numerator = planeNorm.dot(planePoint - ray.getOrigin());
	time = numerator/denominator;
	if(time >= 0){
		intersection = new Point(ray.calcPoint(time));
		return true;	
	}	
	return false;
}
