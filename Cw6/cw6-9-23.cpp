
// Using the this pointer to refer to object members.
#include <iostream>
using namespace std;

class Test
{
public:
    explicit Test(int = 0); // default constructor
    void print(int = 0) const;

private:
    int x;
}; // end class Test

// constructor
Test::Test(int value)
    : x(value) // initialize x to value
{
    // empty body
} // end constructor Test

// print x using implicit and explicit this pointers;
// the parentheses around *this are required
void Test::print(int y) const
{
    // implicitly use the this pointer to access the member x
    cout << "        x = " << x;

    // explicitly use the this pointer and the arrow operator
    // to access the member x
    cout << "\n  this->x = " << this->x;

    // explicitly use the dereferenced this pointer and
    // the dot operator to access the member x
    cout << "\n(*this).x = " << (*this).x << endl;
} // end function print

int main()
{
    Test testObject(12); // instantiate and initialize testObject

    testObject.print(3);
} // end main
