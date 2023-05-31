#ifndef DATE_H
#define DATE_H

// Time class definition
class Date
{
public:
	Date(int, int, int); // constructor
	void setDate(int, int, int); // set hour, minute and second
	void printUniversal() const; // 印出西元年格式 format
	void printStandard() const; // 印出民國年格式 format
private:
	unsigned int year; // 0 - 9999 
	unsigned int month; // 1 - 12
	unsigned int day; // 1 - 31
}; // end class Time

#endif
