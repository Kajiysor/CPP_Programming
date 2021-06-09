#include <string.h>
#include <iostream>
#include <stdexcept>
#include "teacher.h"
using namespace std;

Teacher::Teacher(const string &_firstName, const string &_lastName,
                 const string &_PESEL)
    : Person(_firstName, _lastName, _PESEL)
{
}

void Teacher::addGrade(Student &S, int grade)
{
    if (grade <= 6 && grade >= 1)
    {
        S.Grades.push_back(grade);
    }
    else
        throw invalid_argument("Grade must be greater than 1 and less than 6");
}
