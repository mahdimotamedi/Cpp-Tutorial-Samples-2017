// goto loop example
#include <iostream>

using namespace std;

int main()
{
    int n = 10;

    mylabel:
    cout << n << ", ";
    n--;

    if (n > 0) goto mylabel;

    cout << "liftoff!\n";
}