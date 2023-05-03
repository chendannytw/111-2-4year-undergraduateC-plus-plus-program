#include <iostream>
using namespace std;

void cube(int&);
void cylinder(int&, int&);
void volume(int&, int&, int&);

int main(){
    int sideValue,a,b,c; 
    double pi = 3.14159;
    cout << "Enter the side length of your cube: ";
    cin >> sideValue;
    a = sideValue;
    cube(a);
    cout << "Volume of cube with side "<< sideValue << " is " << a << endl;
    cout << "\nEnter the radius & height" << endl;
    cin >> a >> b;
    cylinder(a, b);
    pi *= (double)a;
    cout << "Volume of cylinder is " << pi << endl;
    cout << "\nEnter the length & height & width" << endl;
    cin >> a >> b >> c;
    volume(a, b, c);
    cout << "The volume is " << a << endl;
} 

void cube(int &a) {
    a=a*a*a;
}

void cylinder(int &a, int &b) {
    a=a *a  * b;
}

void volume(int &a, int &b, int &c){
    a=a* b* c;
}