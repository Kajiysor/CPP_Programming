#include <iostream>
#include <stdexcept>
#include "student.h"

using namespace std;

Student::Student(const string &_firstName, const string &_lastName, const string &_PESEL) : Person(_firstName, _lastName, _PESEL)
{
}

void Student::printGrades()
{
    cout << *this << " Grades: ";
    for (unsigned int i = 0; i < Grades.size(); i++)
    {
        cout << Grades[i] << " ";
    }
    cout << endl;
}
