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
    S.Grades.push_back(grade);
}
