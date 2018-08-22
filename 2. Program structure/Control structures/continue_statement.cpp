// continue loop example
#include <iostream>

using namespace std;

int main()
{
    for (int n = 10; n > 0; n--)
    {
        if (n == 5) continue;
        cout << n << ", ";
    }

    cout << "liftoff!\n";
}