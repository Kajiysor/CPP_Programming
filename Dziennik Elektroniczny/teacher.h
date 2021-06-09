#ifndef TEACHER_H
#define TEACHER_H

#include <string>
#include "person.h"

class Student;
#include "student.h"

class Teacher : public Person
{
public:
    Teacher(const std::string &, const std::string &,
            const std::string &);
    virtual ~Teacher() {}

    void addGrade(Student &, int);
};
#endif