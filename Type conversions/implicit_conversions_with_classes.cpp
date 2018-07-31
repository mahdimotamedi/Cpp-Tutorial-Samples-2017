// implicit conversion of classes:
#include <iostream>

using namespace std;

class A {
};

class B {
public:
    // conversion from A (constructor):
    B(const A &x) {}

    // conversion from A (assignment):
    B &operator=(const A &x) { return *this; }

    // conversion to A (type-cast operator)
    operator A() { return A(); }
};

int main()
{
    A foo;

    B bar = foo; // calls constructor
    bar = foo;   // calls assignment
    foo = bar;   // calls type-cast operator

    return 0;
}