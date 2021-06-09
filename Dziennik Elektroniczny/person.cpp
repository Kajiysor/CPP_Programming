#include <iostream>
#include "person.h"
using namespace std;

Person::Person(const string &_firstName, const string &_lastName,
               const string &_PESEL)
    : firstName(_firstName), lastName(_lastName), PESEL(_PESEL)

{
}

Person::Person(const Person &other)
{
    firstName = other.firstName;
    lastName = other.lastName;
    PESEL = other.PESEL;
}

void Person::setFirstName(const string &_firstName)
{
    firstName = _firstName;
}

string Person::getFirstName() const
{
    return firstName;
}

void Person::setLastName(const string &_lastName)
{
    lastName = _lastName;
}

string Person::getLastName() const
{
    return lastName;
}

void Person::setPESEL(const string &_PESEL)
{
    PESEL = _PESEL;
}

string Person::getPESEL() const
{
    return PESEL;
}

void Person::info() const
{
    cout << getFirstName() << " " << getLastName() << "\nPESEL: " << getPESEL() << "\n"
         << endl;
}

ostream &operator<<(ostream &os, Person &t)
{
    os << t.firstName << ' ' << t.lastName;
    return os;
}
