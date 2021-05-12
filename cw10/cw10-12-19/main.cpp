
// Demonstrating downcasting and runtime type information.
// NOTE: You may need to enable RTTI on your compiler
// before you can compile this application.
#include <iostream>
#include <iomanip>
#include <vector>
#include <typeinfo>
#include "Employee.h"
#include "SalariedEmployee.h"
#include "CommissionEmployee.h"
#include "BasePlusCommissionEmployee.h"
using namespace std;

int main()
{
     // set floating-point output formatting
     cout << fixed << setprecision(2);

     // create vector of three base-class pointers
     vector<Employee *> employees(3);

     // initialize vector with various kinds of Employees
     employees[0] = new SalariedEmployee(
         "John", "Smith", "111-11-1111", 800);
     employees[1] = new CommissionEmployee(
         "Sue", "Jones", "333-33-3333", 10000, .06);
     employees[2] = new BasePlusCommissionEmployee(
         "Bob", "Lewis", "444-44-4444", 5000, .04, 300);

     // polymorphically process each element in vector employees
     for (Employee *employeePtr : employees)
     {
          employeePtr->print(); // output employee information
          cout << endl;

          // downcast pointer
          BasePlusCommissionEmployee *derivedPtr =
              dynamic_cast<BasePlusCommissionEmployee *>(employeePtr);

          // determine whether element points to a BasePlusCommissionEmployee
          if (derivedPtr != nullptr) // true for "is a" relationship
          {
               double oldBaseSalary = derivedPtr->getBaseSalary();
               cout << "old base salary: $" << oldBaseSalary << endl;
               derivedPtr->setBaseSalary(1.10 * oldBaseSalary);
               cout << "new base salary with 10% increase is: $"
                    << derivedPtr->getBaseSalary() << endl;
          } // end if

          cout << "earned $" << employeePtr->earnings() << "\n\n";
     } // end for

     // release objects pointed to by vector’s elements
     for (const Employee *employeePtr : employees)
     {
          // output class name
          cout << "deleting object of "
               << typeid(*employeePtr).name() << endl;

          delete employeePtr;
     } // end for
} // end main
