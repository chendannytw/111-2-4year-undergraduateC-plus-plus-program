// Fig. 9.21: fig9_21.cpp
// Demonstrating composition--an object with member objects.
#include <iostream>
#include "Pet.h" // Employee class definition
using namespace std;

int main()
{
	Date birth(7, 24, 1949);
	Date adopt(3, 12, 1988);
	Pet Dog("Husky", "Bob", birth, adopt);

	cout << endl;
	Dog.print();
} // end main