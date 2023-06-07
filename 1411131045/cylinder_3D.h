//2023/6/7
#ifndef cylinder3d_H

#define cylinder3d_H

#include"pie_2D.h"

using namespace std;

/*繼承類別的宣告方法為「衍生類別：基礎類別」*/

//繼承pie_2d類別的cylinder_3d類別(包含5個成員函數與1個資料成員 + pie_2d內的函數與資料成員)

class cylinder_3d:public pie_2d

{

public:

    cylinder_3d(double = 0, double = 0);            //建構子

    void setheight(double);                           //設定高度

    double getheight();                                     //取得高度   

    double compute_volume();                          //計算體積

    double compute_surface();                         //計算表面積

    double height;                                          //高

};

#endif
