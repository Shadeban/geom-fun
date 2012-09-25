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

Ray Camera::rayAt(int screenX, int screenY) const {
	return Ray(Point(0,0,0), Point(botLeftX + screenX * deltaX, botLeftY + (height - screenY) * deltaY, -1));
}
