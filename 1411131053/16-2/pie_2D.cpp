#include<iostream>

#include<stdexcept>

#include"pie_2D.h"

using namespace std;

square_2d::square_2d(const double r, const double h)

{

    setradius(r);

    setheight(h);

}

void square_2d::setradius(const double r) {

    radius = r;

}

void square_2d::setheight(const double h) {

    height = h;

}

double square_2d::getradius() {

    return radius;

}

double square_2d::getheight() {

    return height;

}

//面積計算：(長*寬+寬*高+長*高)*2

double square_2d::compute_surface() const {

    return 2 * radious * 3.14 * height + 2 * radious * radious * 3.14;

}