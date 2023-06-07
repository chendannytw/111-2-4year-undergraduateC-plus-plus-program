#include<iostream>

#include<stdexcept>

#include"pie_2D.h"

using namespace std;

pie_2D::pie_2D(const double l)

{

    setr(l);


}

void pie_2D::setr(const double l) { //半徑

    r = l;

}


double pie_2D::getr() {

    return r;

}



//面積計算：半徑*半徑*3.14

double pie_2D::compute_area() const {

    return r * r  *3.14;

}
