// switch example
#include <iostream>

using namespace std;

int main()
{
    int x = 4;

    switch (x) {
        case 1:
        case 2:
        case 3:
            cout << "x is 1, 2 or 3";
            break;
        default:
            cout << "x is not 1, 2 nor 3";
    }
}