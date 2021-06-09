#include <iostream>
#include "class.h"
#include "student.h"
using namespace std;

void Class::printClass()
{
    for (const auto *el : Students)
    {
        cout << el->getFirstName() << " " << el->getLastName() << endl;
    }
}
