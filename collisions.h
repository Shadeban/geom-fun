#ifndef GFCOLLISIONS_H
#define GFCOLLISIONS_H
#include "point.h"
#include "ray.h"
#include "triangle.h"

bool collides(const Ray&, const Triangle&, Point*);

bool collides(const Ray&, const Point&, const Point&, Point*);

#endif
