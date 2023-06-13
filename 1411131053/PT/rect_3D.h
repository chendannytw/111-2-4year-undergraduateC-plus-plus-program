#ifndef square3d_H
#define square3d_H
#include "square_2D.h"
using namespace std;

class rect_3d :public square_2d
{
public:
	rect_3d(double = 0, double = 0, double = 0);
	void setheight(const double);
	double getheight();
	double compute_volume() const;
	double compute_surface() const;

	double height;
};
#endif 

#pragma once