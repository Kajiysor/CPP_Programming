#ifndef HEAD_TEACHER_H
#define HEAD_TEACHER_H

#include "student.h"
#include "teacher.h"
class Class;
#include "class.h"

class Head_Teacher : public Teacher
{
public:
    Head_Teacher(const std::string &, const std::string &,
                 const std::string &);
    virtual ~Head_Teacher() {}

    void addClassTeacher(Teacher &, Class &);
    void addStudent_to_Class(Student &, Class &);
};

#endif