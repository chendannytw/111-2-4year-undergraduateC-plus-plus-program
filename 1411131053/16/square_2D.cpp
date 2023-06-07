#include<iostream>

#include<stdexcept>

#include"square_2D.h"

using namespace std;

square_2d::square_2d(const double l, const double w)

{

    setlength(l);

    setwidth(w);

}

void square_2d::setlength(const double l) {

    length = l;

}

void square_2d::setwidth(const double w) {

    width = w;

}

double square_2d::getlength() {

    return length;

}

double square_2d::getwidth() {

    return width;

}

//­±¿n­pºâ¡Gªø*¼e

double square_2d::compute_area() const {

    return length * width;

}