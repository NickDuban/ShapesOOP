#ifndef CUBE_H
#define CUBE_H

#include "shape3d.h"
#include "catch.hpp"
class Cube : public Shape3d
{
   double length;
public:
   Cube(Point &p, double l = 1.0);

   bool contains(const Point &p) const;
   double volume() const;
};

#endif
