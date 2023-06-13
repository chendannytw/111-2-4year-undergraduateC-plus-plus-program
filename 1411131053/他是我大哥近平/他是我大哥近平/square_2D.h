
#ifndef square2d_H
#define square2d_H

using namespace std;

class square_2d 
{
public:
	square_2d (double=0, double=0);
	void setlength(const double);  
	void setwidth(const double);   
	double getlength();            
	double getwidth();             
	double compute_area() const;    

	double length;                 
	double width;                  

private:

};
#endif

#pragma once