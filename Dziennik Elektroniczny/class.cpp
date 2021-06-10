#include <iostream>
#include "class.h"
#include "student.h"
using namespace std;

void Class::printClass()
{
    cout << "Class teacher: " << *nauczyciel << endl;
    cout << "Students: " << endl;
    for (const auto *el : Students)
    {
        cout << el->getFirstName() << " " << el->getLastName() << endl;
    }
}
