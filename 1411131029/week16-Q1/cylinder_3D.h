#ifndef cylinder_3D_H

#define cylinder_3D_H

#include"pie_2D.h"

using namespace std;

/*繼承類別的宣告方法為「衍生類別：基礎類別」*/

//繼承square_2d類別的rect_3d類別(包含5個成員函數與1個資料成員 + square_2d內的函數與資料成員)

class cylinder_3D :public pie_2D

{

public:

    cylinder_3D(double = 0, double = 0);            //建構子

    void setheight(const double);                           //設定高度

    double getheight();                                     //取得高度   

    double compute_volume() const;                          //計算體積

    double compute_surface() const;                         //計算面積

    double height;                                          //高

};

#endif#pragma once
