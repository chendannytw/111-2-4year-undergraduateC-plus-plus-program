#include<iostream>

#include<stdexcept>

#include"cylinder_3D.h"

using namespace std;

cylinder_3D::cylinder_3D(double l,  double h)

{

    setr(l);

    setheight(h);

}

void cylinder_3D::setheight(const double h) {

    height = h;

}

double cylinder_3D::getheight() {

    return height;

}

//體積計算：半徑*半徑*3.14*高度

double cylinder_3D::compute_volume() const {

    return r * r * 3.14 * height;

}

//表面積計算：(半徑*半徑*3.14)*2+(半徑*2*3.14)*高

double cylinder_3D::compute_surface() const {

    return (r * r * 3.14)*2+(r*2*3.14)* height;

}
