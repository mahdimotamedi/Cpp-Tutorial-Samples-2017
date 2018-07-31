// class type-casting
#include <iostream>

using namespace std;

class Dummy {
    double i, j;
};

class Addition {
    int x, y;
public:
    Addition(int a, int b) {
        x = a;
        y = b;
    }

    int result() { return x + y; }
};

int main()
{
    Dummy d;
    Addition *padd;

    padd = (Addition *) &d;
    cout << padd->result();

    return 0;
}
