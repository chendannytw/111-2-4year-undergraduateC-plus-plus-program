#ifndef cylinder_3D_H
#define cylinder_3D_H
#include"pie_2D.h"

using namespace std;

class cylinder_3D :public pie_2D

{

public:

    cylinder_3D(double = 0, double = 0);            //建構子

    void setheight(const double);                           //設定高度

    double getheight();                                     //取得高度   

    double compute_volume() const;                          //計算體積

    double compute_surface() const;                         //計算表面積

    double height;                                          //高

};

#endif
