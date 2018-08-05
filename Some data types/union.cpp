// function macro
#include <iostream>

using namespace std;

// declaring_a_union.cpp
union RecordType    // Declare a simple union type
{
    char ch;
    int i;
    long l;
    float f;
    double d;
    int *int_ptr;
};

int main()
{
    RecordType t;
    t.i = 5; // t holds an int
    t.f = 7.25; // t now holds a float

    cout << t.i << "\n"; // it doesn't have any specified value
    cout << t.f;

    return 0;
}
