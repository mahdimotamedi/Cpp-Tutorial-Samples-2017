// copy assignment
#include <iostream>
#include <string>

using namespace std;

class Example5 {
    string *ptr;
public:
    Example5(const string &str) : ptr(new string(str)) {}

    ~Example5() { delete ptr; }

    // copy assignment:
    Example5& operator= (const Example5& x) {
        delete ptr;                      // delete currently pointed string
        ptr = new string (x.content());  // allocate space for new string, and copy
        return *this;
    }

    // access content:
    const string &content() const { return *ptr; }
};

int main()
{
    Example5 foo("Example");
    Example5 bar = foo;

    cout << "bar's content: " << bar.content() << '\n';
    return 0;
}
