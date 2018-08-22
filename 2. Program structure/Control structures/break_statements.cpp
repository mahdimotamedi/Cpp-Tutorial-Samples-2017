// break loop example
#include <iostream>

using namespace std;

int main()
{
    for (int n = 10; n > 0; n--)
    {
        cout << n << ", ";

        if (n == 3) {
            cout << "countdown aborted!";
            break;
        }
    }
}