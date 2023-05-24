#include <iostream>
#include <stdexcept> // for invalid_argument exception class
#include "Time.h" // include definitionof class Time from Time.h
using namespace std;

int main()
{
    date t(2023,5,24); // instantiate object t of class Time

    // output Time object t's initial values
    cout <<"さら" << "The initial universal time is ";
    t.printUniversal(); // 00:00:00
    cout << "\nさら" << "The initial standard time is ";
    t.printStandard(); // 12:00:00 AM

    int y, m, d;
    try
    {   
        cout << "\ninput Pet birthday Year Month Day\n";
        cin >> y >> m >> d;
        t.setTime(y, m, d);
    } // end try
    catch (invalid_argument& e)
    {
        cout << "\n\nException: " << e.what() << endl;
    } // end catch

    // output t's values after specifying invalid values
    cout << "\n�茲献佑�:";
    t.printUniversal(); // 13:27:06
    cout << "\nチ郁ネら:";
    t.printStandard(); // 1:27:06 PM
    cout << endl;
}
