// default and delete implicit members
#include <iostream>

using namespace std;

class Rectangle {
    int width, height;
public:
    Rectangle(int x, int y) : width(x), height(y) {}

    Rectangle() = default;

    Rectangle(const Rectangle &other) = delete;

    int area() { return width * height; }
};

int main()
{
    Rectangle foo;
    Rectangle bar(10, 20);

    cout << "bar's area: " << bar.area() << '\n';

    return 0;
}