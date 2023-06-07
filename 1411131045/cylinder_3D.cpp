#include<iostream>

#include<stdexcept>

#include"cylinder_3D.h"

using namespace std;

cylinder_3d::cylinder_3d(double r, double h)

{

    setradious(r);
    setheight(h);

}

void cylinder_3d::setheight( double h) {

    height = h;

}

double cylinder_3d::getheight() {

    return height;

}

//體積計算：長*寬*高

double cylinder_3d::compute_volume()  {

    return radious * radious * 3.14 * height;

}

//表面積計算：(長*寬+寬*高+長*高)*2

double cylinder_3d::compute_surface()  {

    return 2 * radious  * 3.14*height + 2*radious * radious * 3.14 ;

}
