#include <iostream>

class B
{
public:
    int x;

    B(int a)
        : x(a)
    {
    }

    void Bx()
    {
        std::cout << "B: " << x << std::endl;
    }
};

class P
    : public B
{
public:
    int x;

    P(int a, int b)
        : B(a), x(b) //wywołujemy konstruktor klasy bazowej
    {
    }

    void Px()
    {
        std::cout << "P: " << x << std::endl;
    }
};

int main()
{
    P p(1, 2);
    p.Bx(); //odziedziczone po B
    p.Px();
    std::cout << "---" << std::endl;
    p.x = 0; //modyfikuje x z P
    p.Bx();
    p.Px();
    std::cout << "---" << std::endl;
    p.B::x = 8; //modyfikuje x z B
    p.Bx();
    p.Px();
}
