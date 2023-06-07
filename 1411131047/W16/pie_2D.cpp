#include<iostream>

#include<stdexcept>

#include"pie_2D.h"

using namespace std;

pie_2D::pie_2D(const double r)

{

    setR(r);

}

void pie_2D::setR(const double a) {

    R = a;

}



double pie_2D::getR() {

    return R;

}


double pie_2D::compute_area() const {

    return R*R* 3.14;

}
