#ifndef GFCAMERA_H
#define GFCAMERA_H
#include "ray.h"

class Camera{
	public:
		double deltaX;
		double deltaY;
		int width;
		int height;
		double botLeftX;
		double botLeftY;	
		Camera(double , int , int );
		Ray rayAt(int, int) const;

};

#endif
