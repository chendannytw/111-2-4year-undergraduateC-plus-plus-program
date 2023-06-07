#include<iostream>

#include<stdexcept>

#include"pie_2D.h"

#include"cylinder_3D.h"

using namespace std;

int main(void) {

    double r;

    double height;

    //視窗輸出配置

    cout << "輸入圓半徑：" << endl;

    cout << "  r=";

    cin >> r;

    pie_2D userenter(r);

    cout << "-------------------------------------------------" << endl;



    cout << "輸入圓柱高:" << endl;

    cout << "  Height=";

    cin >> height;

    cylinder_3D userenter2(r, height);

    cout << "-------------------------------------------------" << endl;

    cout << "The result is:\n\n";

    cout << "  The result of pie:\n";

    cout << "     r：" << userenter.getr() << " cm" << " | r："

        << "\n     The area is "

        << userenter.compute_area() << " cm2\n" << endl;

    cout << "  The result of cylinder:\n";

    cout << "     r：" << userenter2.getr() << " cm" << " | r："

         << " | Height：" << userenter2.getheight()

        << " cm" << "\n     The volume is " << userenter2.compute_volume() << " cm3 | The surface is " << userenter2.compute_surface() << " cm2\n" << endl;



    system("pause");

}
