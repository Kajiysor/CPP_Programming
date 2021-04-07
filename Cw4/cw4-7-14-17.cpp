#include <iostream>
#include <set>
using namespace std;
int main()
{
    set<int> zbior;
    zbior.insert(5);
    zbior.insert(40);
    zbior.insert(1);
    zbior.insert(11);
    zbior.insert(11);

    //set<int>::iterator it;   // teraz it jest wskaznikiem do zbioru
    for (auto it = zbior.begin(); it != zbior.end(); ++it)
        cout << *it << '\n';

    return 0;
}
