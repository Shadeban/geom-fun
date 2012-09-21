#ifndef GFPOINT_H
#define GFPOINT_H
class Point {

	double x, y, z;

	public:
		Point(double inx, double iny, double inz);

		double getX(void) const;
		double getY(void) const;
		double getZ(void) const;
		double dot(const Point& rhs) const;
		Point cross(const Point& rhs) const;
};

inline Point operator+(const Point& lhs, const Point& rhs){
	return Point(lhs.getX() + rhs.getX(), lhs.getY() + rhs.getY(), lhs.getZ() + rhs.getZ());	
}
inline Point operator*(const Point& lhs, const double& rhs){
	return Point(lhs.getX() * rhs, lhs.getY() * rhs, lhs.getZ() * rhs);
}
inline Point operator*(const double& lhs, const Point& rhs){
	return rhs * lhs;
}
inline Point operator-(const Point& lhs, const Point& rhs){
	return lhs + (rhs * -1);
}
inline Point operator/(const Point& lhs, const double& rhs){
	return lhs * (1.0 / rhs);
}
#endif
