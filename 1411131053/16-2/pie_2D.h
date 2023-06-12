#ifndef pie2d_H

#define pie2d_H

using namespace std;

//square_2d的類別(包含6個成員函數與2個資料成員)

class pie_2d {

public:

    pie_2d(double = 0, double = 0);           //建構子

    void setradius(const double);           //設定半徑

    void setheight(const double);            //設定高度

    double getradius();                     //取得半徑   

    double getlength();                     //取得長度

    double getheight();                      //取得高度   

    double compute_surface() const;            //計算表面積

    double compute_volume() const;          //計算體積

    double radius;                          //半徑

    double height;                          //高

};

#endif#pragma once
#pragma once
