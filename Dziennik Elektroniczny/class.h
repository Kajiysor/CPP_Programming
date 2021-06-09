#ifndef CLASS_H
#define CLASS_H

#include <string>
#include <vector>
#include "student.h"
#include "teacher.h"
#include "head_teacher.h"

class Class
{
public:
    void printClass();
    friend class Head_Teacher;

private:
    std::vector<Student *> Students;
    Teacher *nauczyciel;
};

#endif