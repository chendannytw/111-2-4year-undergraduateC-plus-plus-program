#include <iostream>
#include <stdexcept>
#include "square_2D.h"
#include "rect_3D.h"
using namespace std;

int main(void) {
	double length;
	double width;
	double height;

	cout << "Enter the length and width for square:" << endl;

		cout << " length:";
		cin >> length;

		cout << " width:";
		cin >> width;

		square_2d userenter(length, width);

		cout << "-------------------------------------" << endl;

	cout << " Enter the height for square:" << endl;
	 
	    cout << " height:";
	    cin >> height;

		rect_3d userenter2(length, width, height);

		cout << "-------------------------------------" << endl;

		cout << "length:" << userenter.getlength() << " cm" << "| width:" << userenter.getwidth() << " cm" << "\n The area is:" << userenter.compute_area() << " cm^2" << endl;

		cout << "length:" << userenter2.getlength() << " cm" << "| width:" << userenter2.getwidth() << " cm" << " | height:" << userenter2.getheight() << " cm" << "\n The volume is:" << userenter2.compute_volume() << " cm^3" << "| The surface is:" << userenter2.compute_surface() << " cm^2" << endl;

		system("pause");
}