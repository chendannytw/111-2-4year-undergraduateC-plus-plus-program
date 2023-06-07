#ifndef pie_2D_H

#define pie_2D_H

using namespace std;

//pie_2D的類別(包含6個成員函數與2個資料成員)

class pie_2D {

public:

    pie_2D (double = 0);           //建構子

    void setr(const double);           //設定半徑

    double getr();                     //取得半徑   

    double compute_area() const;            //計算面積

    double r;                          //半徑

};

#endif
