#include <iostream>
using namespace std;

class Bazowa
{
public:
    void fun() { cout << "Bazowa \n"; }
};

class Pochodna : public Bazowa
{
public:
    void fun() { cout << "Pochodna \n"; }
};

int main()
{

    Bazowa *bazowa = new Pochodna();
    Pochodna *pochodna = new Pochodna();

    bazowa->fun();   //wyswietli: bazowa
    pochodna->fun(); //wyswietli: pochodna

    bazowa = new Bazowa();

    bazowa->fun(); //wyswietli: bazowa

    return 0;
}
