#include<iostream>

#include<stdexcept>

#include"pie_2D.h"

using namespace std;

pie_2d::pie_2d(double r)

{

    setradious(r);


}

void pie_2d::setradious(double r) {

    radious = r;

}


double pie_2d::getradious() {

    return radious;

}


//­±¿n­pºâ¡G¥b®|*¥b®|*3.14

double pie_2d::compute_area(){

    return radious * radious*3.14;

}
