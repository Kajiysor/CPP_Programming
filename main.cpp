#include "rnm.h"
#include <iostream>

using namespace std;

int main()
{
    float a, b;

    cin >> a;
    cin >> b;

    cout << a << " + " << b << " = " << Suma(a, b) << endl;
    cout << a << " - " << b << " = " << Roznica(a, b) << endl;
    return 0;
}