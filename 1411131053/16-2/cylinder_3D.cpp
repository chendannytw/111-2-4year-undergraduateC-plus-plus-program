#include<iostream>

#include<stdexcept>

#include"cylinder_3D.h"

using namespace std;

cylinder_3d::cylinder_3d(double l, double r)

{
    setlength(l);

    setradius(r);
}

//體積計算：圓周率*半徑^2*長度

double cylinder_3d::compute_volume() const {

    return 3.14 * radius * radius * length;

}