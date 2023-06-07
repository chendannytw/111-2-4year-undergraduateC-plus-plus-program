#include<iostream>
#include<stdexcept>
#include"cylinder_3D.h"
using namespace std;
cylinder_3D::cylinder_3D(double a, double h)
{
    setR(a);
    setheight(h);
}

void cylinder_3D::setheight(const double h) {
    height = h;
}

double cylinder_3D::getheight() {
    return height;
}


double cylinder_3D::compute_volume() const {
    return compute_area() * height;
}


double cylinder_3D::compute_surface() const {
    return (R*2*3.14*height + compute_area()*2);
}
