#ifndef pie2d_H

#define pie2d_H

using namespace std;

//square_2d的類別(包含6個成員函數與2個資料成員)

class square_2d {

public:

    square_2d(double = 0, double = 0);           //建構子

    void setradius(const double);           //設定半徑

    void setheight(const double);            //設定高度

    double getradius();                     //取得半徑   

    double getheight();                      //取得高度   

    double compute_area() const;            //計算表面積

    double radius;                          //長

    double height;                           //寬

};

#endif#pragma once
#pragma once
