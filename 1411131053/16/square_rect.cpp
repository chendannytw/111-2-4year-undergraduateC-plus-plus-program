#include<iostream>

#include<stdexcept>

#include"square_2D.h"

#include"rect_3D.h"

using namespace std;

int main(void) {

    double length;

    double width;

    double height;

    //µøµ¡¿é¥X°t¸m

    cout << "Enter the length and width for square¡G" << endl;

    cout << "  Length=";

    cin >> length;



    cout << "  Width =";

    cin >> width;

    square_2d userenter(length, width);

    cout << "-------------------------------------------------" << endl;



    cout << "Enter the height for rect:" << endl;

    cout << "  Height=";

    cin >> height;

    rect_3d userenter2(length, width, height);

    cout << "-------------------------------------------------" << endl;

    cout << "The result is:\n\n";

    cout << "  The result of square:\n";

    cout << "     Length¡G" << userenter.getlength() << " cm" << " | Width¡G"

        << userenter.getwidth() << " cm" << "\n     The area is "

        << userenter.compute_area() << " cm2\n" << endl;

    cout << "  The result of rect:\n";

    cout << "     Length¡G" << userenter2.getlength() << " cm" << " | Width¡G"

        << userenter2.getwidth() << " cm" << " | Height¡G" << userenter2.getheight()

        << " cm" << "\n     The volume is " << userenter2.compute_volume() << " cm3 | The surface is " << userenter2.compute_surface() << " cm2\n" << endl;



    system("pause");

}