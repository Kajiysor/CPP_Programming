
#include <cstring>
#include <iostream>

struct Employee
{
    char first_name[16];
    int age;
} emp;

class S
{
public:
    S(){};
    int x;
    void print() { std::cout << "!!!" << std::endl; }
};

int main()
{
    strcpy(emp.first_name, "zara1"); // .

    std::cout << emp.first_name << std::endl;

    //auto p_emp = &emp;
    Employee *p_emp = &emp;
    strcpy(p_emp->first_name, "zara2"); // ->

    std::cout << emp.first_name << std::endl;

    auto p_emp2 = &emp;
    strcpy(p_emp2->first_name, "zara3"); // ->

    std::cout << emp.first_name << std::endl;

    //auto p_s = new S();
    S *p_s = new S();
    p_s->print();
}
