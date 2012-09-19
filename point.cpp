class Point {

	double x, y, z;

	public:
		Point(double inx, double iny, double inz){
			x = inx;
			y = iny;
			z = inz;
		}

		double getX(void) const{
			return x;
		}
		double getY(void) const{
			return y;
		}
		double getZ(void) const{
			return z;
		}
		double dot(const Point& rhs) const{
			return x*rhs.getX() + y * rhs.getY() + z * rhs.getZ();
		}
		Point cross(Point& rhs) const{
			return Point(y*rhs.getZ() - rhs.getY() * z,\
				     z*rhs.getX() - rhs.getZ() * x,\
				     x * rhs.getY() - rhs.getX() * y);
		}
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

