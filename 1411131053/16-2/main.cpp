#include<iostream>

#include<stdexcept>

#include"pie_2D.h"

#include"cylinder_3D.h"

using namespace std;

int main(void) {

    double length;

    double radius;

    //µøµ¡¿é¥X°t¸m

    cout << "Enter the length and width for square¡G" << endl;

    cout << "  Length=";

    cin >> length;



    cout << "  radius =";

    cin >> radius;

    square_2d userenter(length, radius);

    cout << "-------------------------------------------------" << endl;

    rect_3d userenter2(length, radius);

    cout << "-------------------------------------------------" << endl;

    cout << "The result is:\n\n";

    cout << "  The result of square:\n";

    cout << "     Length¡G" << userenter.getlength() << " cm" << " | radius¡G"

        << userenter.radius() << " cm" << "\n   The volume is "

        << userenter.compute_volume() << " cm2\n" << endl;

    cout << "  The result of rect:\n";

    cout << "     Length¡G" << userenter2.getlength() << " cm" << " | Width¡G"

        << userenter2.getwidth() << " cm" << " | Height¡G" << userenter2.getheight()

        << " cm" << "\n     The volume is " << userenter2.compute_volume() << " cm3 | The surface is " << userenter2.compute_surface() << " cm2\n" << endl;

    system("pause");

}