#ifndef pie_2D_H

#define pie_2D_H

using namespace std;



class pie_2D {

public:

    pie_2D(double = 0);           //建構子

    void setR(const double);           //設定R

    double getR();                     //取得R   

    double compute_area() const;            //計算面積

    double R;                          //半徑


};

#endif