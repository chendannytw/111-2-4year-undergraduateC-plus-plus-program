#include<iostream>

#include<stdexcept>

#include"cylinder_3D.h"

using namespace std;

cylinder_3d::cylinder_3d(double h, double r)

{
    setheight(h);

    setradius(r);
}

void cylinder_3d::setheight(double h) {
    height = h;
}

double cylinder_3d::getheight() {
    return height;
}
//體積計算：圓周率*半徑^2*長度

double cylinder_3d::compute_volume() const {

    return 3.14 * radius * radius * height;

}
