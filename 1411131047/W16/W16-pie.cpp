#include<iostream>
#include<stdexcept>
#include"cylinder_3D.h"


using namespace std;

int main(void) {

    double R,H;
    cout << "Enter the length and width for square¡G" << endl;
    cout << "  R=";

    cin >> R;
   
    pie_2D userenter(R);

    cout <<"Pie area =" << userenter.compute_area() << endl;
    cin >> H;
    
    cylinder_3D userenter2(R, H);
    cout << "cylinder surface =" << userenter2.compute_surface() << endl;
    cout << "cylinder volume =" << userenter2.compute_volume() << endl;
    

}
