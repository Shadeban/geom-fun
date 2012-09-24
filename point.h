#ifndef GFPOINT_H
#define GFPOINT_H
class Point {


	public:
		double x, y, z;
		Point(double inx, double iny, double inz);
		double getX(void) const;
		double getY(void) const;
		double getZ(void) const;

		Point* setX(double);
		Point* setY(double);
		Point* setZ(double);
		double dot(const Point& rhs) const;
		Point cross(const Point& rhs) const;
};

inline Point operator+(const Point& lhs, const Point& rhs){
	return Point(lhs.x + rhs.x, lhs.y+ rhs.y, lhs.z + rhs.z);	
}
inline Point operator*(const Point& lhs, const double& rhs){
	return Point(lhs.x * rhs, lhs.y * rhs, lhs.z * rhs);
}
inline Point operator*(const double& lhs, const Point& rhs){
	return rhs * lhs;
}
inline Point operator-(const Point& lhs, const Point& rhs){
	return Point(lhs.x - rhs.x, lhs.y - rhs.y, lhs.z - rhs.z);	
}
inline Point operator/(const Point& lhs, const double& rhs){
	return lhs * (1.0 / rhs);
}
inline double Point::dot(const Point& rhs) const{
	return x*rhs.x + y * rhs.y + z * rhs.z;

}
inline Point Point::cross(const Point& rhs) const{
	return Point(y*rhs.z - rhs.y * z,\
			z*rhs.x - rhs.z * x,\
			x * rhs.y - rhs.x * y);
}
#endif
