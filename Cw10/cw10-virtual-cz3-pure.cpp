#include <iostream>
#include <vector>
using namespace std;

class Pojazd
{
public:
    virtual void zatrzymaj() = 0;
};

class Samochod : public Pojazd
{
public:
    void zatrzymaj() override
    {
        cout << "zatrzymuje samochod\n";
    }
};

class Rower : public Pojazd
{
public:
    void zatrzymaj()
    {
        cout << "zatrzymuje rower\n";
    }
};

class Rolki : public Pojazd
{
public:
    void zatrzymaj()
    {
        cout << "zatrzymuje rolki\n";
    }
};

int main()
{
    Pojazd **tablica = new Pojazd *[3];

    tablica[0] = new Samochod();
    tablica[1] = new Rower();
    tablica[2] = new Rolki();

    for (int i = 0; i < 3; i++)
    {
        tablica[i]->zatrzymaj();
    }

    std::cout << std::endl;

    std::vector<Pojazd *> v_pojazdy;
    v_pojazdy.push_back(new Samochod());
    v_pojazdy.push_back(new Rolki());
    v_pojazdy.push_back(new Rower());
    for (Pojazd *v : v_pojazdy)
        v->zatrzymaj();

    ///!!!! Pojazd jest klasa abstrakcyjna
    Pojazd p;
    p.zatrzymaj();
    return 0;
}
