#include <iostream>
#include <string.h>
#include "head_teacher.h"
using namespace std;

Head_Teacher::Head_Teacher(const string &_firstName, const string &_lastName, const string &_PESEL)
    : Teacher(_firstName, _lastName, _PESEL)
{
}

void Head_Teacher::addClassTeacher(Teacher &nauczyciel, Class &klasa)
{
    klasa.nauczyciel = &nauczyciel;
}

void Head_Teacher::addStudent_to_Class(Student &uczen, Class &klasa)
{
    klasa.Students.push_back(&uczen);
}