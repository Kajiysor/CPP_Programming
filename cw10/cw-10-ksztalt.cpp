#include <iostream>

class Ksztalt
{
public:
    virtual ~Ksztalt() { std::cout << "Destruktor Ksztalt" << std::endl; }
    virtual void rysuj() = 0; //każdy określony kształt musi dać sie narysować
};

class Kolo : public Ksztalt
{
public:
    virtual void rysuj() override { std::cout << "Rysuje kolo: ( )" << std::endl; }
};

class Kwadrat : public Ksztalt
{
public:
    virtual void rysuj() override { std::cout << "Rysuje kwadrat: [ ]" << std::endl; }
    virtual ~Kwadrat() { std::cout << "Destruktor Kwadrat" << std::endl; }
};

int main()
{
    Ksztalt *a = new Kolo, *b = new Kwadrat;

    a->rysuj();
    b->rysuj();

    delete a;
    delete b;
}
