
// Demonstrating class PhoneNumber's overloaded stream insertion 
// and stream extraction operators. + A binary operator +
#include <iostream>
#include "PhoneNumber.h"
using namespace std;

int main()
{
   PhoneNumber phone; // create object phone

   cout << "Enter phone number in the form (123) 456-7890:" << endl;

   // cin >> phone invokes operator>> by implicitly issuing
   // the global function call operator>>( cin, phone )
   cin >> phone;

   cout << "The phone number entered was: ";

   // cout << phone invokes operator<< by implicitly issuing 
   // the global function call operator<<( cout, phone )
   cout << phone << endl;
} // end main

///////////////////////////////////////////////////////////////
// Overloaded operators should mimic the functionality of their built-in counterparts—e.g.,
// the + operator should perform addition, not subtraction. Avoid excessive or inconsistent
// use of operator overloading, as this can make a program cryptic and difficult to read.