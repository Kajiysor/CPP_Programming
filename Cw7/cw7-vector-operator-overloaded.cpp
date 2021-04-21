#include <iostream>

class Vector
{
    double x;
    double y;
public:
    Vector()
    {
        this->x = 0;
        this->y = 0;
    }
    Vector( double x, double y )
    {
        this->x = x;
        this->y = y;
    }
    
    Vector operator !() {
        return Vector( - this->x, - this->y );
    }

    friend std::ostream & operator <<( std::ostream & s, const Vector & v );
};

std::ostream & operator <<( std::ostream & s, const Vector & v )
{
    return s << '<' << v.x << ',' << v.y << '>';
}

int main() {
    Vector v(1.0, 2.0);
    std::cout << v << std::endl;
    std::cout << !v << std::endl;
    
}


