#include "camera.h"
#include <cmath>
Camera::Camera(double fovX, int width, int height){
	this->width = width;
	this->height = height;
	double fovY = ((double)height/(double)width) * fovX;
	double tanFovX = std::tan(fovX);
	double tanFovY = std::tan(fovY);
	botLeftX = -1 * tanFovX;
	botLeftY = -1 * tanFovY;	
	deltaX = ((2 - width)/(double)width) * tanFovX - botLeftX;
	deltaY = ((2 - height)/(double)height) * tanFovY - botLeftY;
	

}
