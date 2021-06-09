#ifndef STUDENT_H
#define STUDENT_H

#include <string>
#include <vector>
#include "person.h"
#include "teacher.h"

class Student : public Person
{
public:
    Student(const std::string &, const std::string &,
            const std::string &);

    virtual ~Student() {}

    void printGrades();

    friend class Teacher;

private:
    std::vector<int> Grades;
};

#endif