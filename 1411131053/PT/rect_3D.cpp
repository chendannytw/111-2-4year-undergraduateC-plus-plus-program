#include <iostream>
#include <stdexcept>
#include "rect_3D.h"
using namespace std;

rect_3d::rect_3d(double l, double w, double h) {
	setlength(l);
	setwidth(w);
	setheight(h);
}

void rect_3d::setheight(const double h) {
	height = h;
}

double rect_3d::getheight() {
	return height;
}

double rect_3d::compute_volume() const {
	return length * width * height;
}

double rect_3d::compute_surface() const {
	return (length * width + width * height + height * length) * 2;
}