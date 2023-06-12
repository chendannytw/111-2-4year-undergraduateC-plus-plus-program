#include<iostream>

#include<stdexcept>

#include"pie_2D.h"

#include"cylinder_3D.h"

using namespace std;

int main(void) {

    double length;

    double radius;

    //視窗輸出配置

    cout << "Enter the length and width for square：" << endl;

    cout << "  Length=";

    cin >> length;



    cout << "  radius =";

    cin >> radius;

    pie_2d userenter(length, radius);

    cout << "-------------------------------------------------" << endl;

    cylinder_3d userenter2(length, radius);

    cout << "-------------------------------------------------" << endl;

    cout << "The result is:\n\n";

    cout << "  The result of square:\n";

    cout << " Length：" << userenter.getlength() << " cm" << " radius："

        << userenter.getradius() << " cm" << "\n   The volume is "

        << userenter.compute_volume() << " cm2\n" << endl;

    cout << "  The result of rect:\n";

    cout << "     Length：" << userenter2.getlength() << " cm" << " | Width："

        << userenter2.getradius() << " cm" << " | Height：" << userenter2.getheight()

        << " cm" << "\n     The volume is " << userenter2.compute_volume() << " cm3 | The surface is " << userenter2.compute_surface() << " cm2\n" << endl;

    system("pause");

}
