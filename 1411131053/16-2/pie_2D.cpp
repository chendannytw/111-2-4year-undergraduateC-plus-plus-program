#include<iostream>

#include<stdexcept>

#include"pie_2D.h"

using namespace std;

pie_2d::pie_2d(const double r, const double h)

{

    setradius(r);

    setheight(h);

}

void pie_2d::setradius(const double r) {

    radius = r;

}

void pie_2d::setheight(const double h) {

    height = h;

}

double pie_2d::getradius() {

    return radius;

}

double pie_2d::getheight() {

    return height;

}

//面積計算：(長*寬+寬*高+長*高)*2

double pie_2d::compute_surface() const {

    return 2 * radius * 3.14 * height + 2 * radius * radius * 3.14;

}
