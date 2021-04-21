#include <iostream>

class C
{
public:
    explicit C( int )
    {
        std::cout << "konstruktor(int)" << std::endl;
    }
};

int main()
{
    C c = 5; //Blad
   
    C c1( 5 ); // OK, jawne wywołanie konstruktora
    C c2 = static_cast < C >( 5 ); // OK, jawna konwersja
    C c3 = C( 5 ); // OK, jawne wywołanie konstruktora
    C c4 =( C ) 5; // OK, jawna konwersja
}

// https://cpp0x.pl/kursy/Programowanie-obiektowe-C++/Podstawy/Konstruktor-jawny/510
