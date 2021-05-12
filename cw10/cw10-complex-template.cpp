#include <iostream>
#include <vector>

template <class T>
class Complex
{
public:
    Complex(T _re, T _im) : re(_re), im(_im) {}
    void print() const;
    void show_type() const;

private:
    T re, im;
};

template <class T>
void Complex<T>::print() const { std::cout << this->re << " : " << this->im << std::endl; }

template <class T>
void Complex<T>::show_type() const { std::cout << typeid(T).name() << std::endl; }

int main()
{

    Complex<int> d1(1.1, 1.0);
    Complex<double> d2(2.2, 3.0);
    Complex<float> d3(3.0, 5.0);
    Complex<float> d4 = d3;

    d1.show_type();
    d2.show_type();
    d3.show_type();
    d4.show_type();

    d1.print();
    d2.print();
}
