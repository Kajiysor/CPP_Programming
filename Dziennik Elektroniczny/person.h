#ifndef PERSON_H
#define PERSON_H

#include <string>

class Person
{
public:
    Person(const std::string &, const std::string &, const std::string &);
    Person(const Person &);

    virtual ~Person() {}

    void setFirstName(const std::string &);
    std::string getFirstName() const;

    void setLastName(const std::string &);
    std::string getLastName() const;

    void setPESEL(const std::string &);
    std::string getPESEL() const;

    virtual void info() const;

private:
    std::string firstName;
    std::string lastName;
    std::string PESEL;
};

#endif