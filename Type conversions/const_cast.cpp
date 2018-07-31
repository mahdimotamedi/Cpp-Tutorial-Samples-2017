// const_cast
#include <iostream>

using namespace std;

void print(char *str) {
    cout << str << '\n';
}

int main()
{
    const char *c = "sample text";

    print(const_cast<char *> (c));

    return 0;
}