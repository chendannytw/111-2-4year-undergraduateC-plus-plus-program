#ifndef square2d_H

#define square2d_H

using namespace std;

//square_2d的類別(包含6個成員函數與2個資料成員)

class square_2d {

public:

    square_2d(double = 0, double = 0);           //建構子

    void setlength(const double);           //設定長度

    void setwidth(const double);            //設定寬度

    double getlength();                     //取得長度   

    double getwidth();                      //取得寬度   

    double compute_area() const;            //計算面積

    double length;                          //長

    double width;                           //寬

};

#endif#pragma once
