
// Constructor with default arguments.
#include <iostream>
#include <stdexcept>
#include "Time.h" // include definition of class Time from Time.h
using namespace std;

int main()
{
    Time t1;             // all arguments defaulted
    Time t2(2);          // hour specified; minute and second defaulted
    Time t3(21, 34);     // hour and minute specified; second defaulted
    Time t4(12, 25, 42); // hour, minute and second specified

    cout << "Constructed with:\n\nt1: all arguments defaulted\n  ";
    t1.printUniversal(); // 00:00:00
    cout << "\n  ";
    t1.printStandard(); // 12:00:00 AM

    cout << "\n\nt2: hour specified; minute and second defaulted\n  ";
    t2.printUniversal(); // 02:00:00
    cout << "\n  ";
    t2.printStandard(); // 2:00:00 AM

    cout << "\n\nt3: hour and minute specified; second defaulted\n  ";
    t3.printUniversal(); // 21:34:00
    cout << "\n  ";
    t3.printStandard(); // 9:34:00 PM

    cout << "\n\nt4: hour, minute and second specified\n  ";
    t4.printUniversal(); // 12:25:42
    cout << "\n  ";
    t4.printStandard(); // 12:25:42 PM

    // attempt to initialize t5 with invalid values
    try
    {
        Time t5(27, 74, 99); // all bad values specified
    }                        // end try
    catch (invalid_argument &e)
    {
        cerr << "\n\nException while initializing t5: " << e.what() << endl;
    } // end catch

    // attempt to initialize t5 with invalid values
    try
    {
        Time t5(23, 74, 99); // all bad values specified
    }                        // end try
    catch (invalid_argument &e)
    {
        cerr << "\n\nException while initializing t5: " << e.what() << endl;
    } // end catch

    //C++11: Using List Initializers to Call Constructors
    Time tt2{2};
    Time tt3{21, 34};
    Time tt4{12, 25, 42};

    Time ttt2 = {2};
    Time ttt3 = {21, 34};
    Time ttt4 = {12, 25, 42};

    ttt4.printStandard();
} // end main
