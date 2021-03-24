
// GradeBook class demonstration after separating
// its interface from its implementation.
#include <iostream>
#include "GradeBook.h" // include definition of class GradeBook

// function main begins program execution
int main()
{
    // create two GradeBook objects
    GradeBook gradeBook1("CS101 Introduction to C++ Programming");
    GradeBook gradeBook2("CS102 Data Structures in C++");

    // display initial value of courseName for each GradeBook
    std::cout << "gradeBook1 created for course: " << gradeBook1.getCourseName()
              << "\ngradeBook2 created for course: " << gradeBook2.getCourseName()
              << std::endl;
} // end main
