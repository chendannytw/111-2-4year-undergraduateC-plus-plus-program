//2023/6/7
#ifndef pie2d_H

#define pie2d_H

using namespace std;

//square_2d的類別(包含6個成員函數與2個資料成員)

class pie_2d {

public:

    pie_2d(double = 0);           //建構子

    void setradious(double);           //設定半徑

    double getradious();                     //取得半徑

    double compute_area();            //計算面積

    double radious;                          //半徑


};

#endif
