#include "collisions.h"


bool collides(const Ray& ray, const Triangle& triangle, Point* intersection){
	bool intersectsPlane = collides(ray, *triangle.vertex[0], *triangle.norm, intersection);
	if (!intersectsPlane) return false;
	
	Point u = *triangle.vertex[1] - *triangle.vertex[0];
	Point v = *triangle.vertex[2] - *triangle.vertex[0];
	Point w = *intersection - *triangle.vertex[0];
	double uv, wv, vv, wu, uu;
	uv = u.dot(v);
	wv = w.dot(v);
	vv = v.dot(v);
	wu = w.dot(u);
	uu = u.dot(u);
	double denom = uv * uv - uu * vv;
	if (denom == 0){
		return false;	
	}
	double s = (uv * wv - vv * wu)/denom;
	double t = (uv * wu - uu * wv)/denom;
	if(s >= 0 && s <= 1){
		if(t >= 0 && t <= 1){
			if(s + t <=1){
				return true;
			}
		}	
	}
	return false;
}


bool collides(const Ray& ray, const Point& planePoint, const Point& planeNorm, Point* intersection){
	double numerator, denominator, time;
	denominator = ray.getDir()->dot(planeNorm);
	if (denominator == 0) return false;
	numerator = planeNorm.dot(planePoint - *ray.getOrigin());
	time = numerator/denominator;
	if(time >= 0){
		*intersection = Point(ray.calcPoint(time));
		return true;	
	}	
	return false;
}
