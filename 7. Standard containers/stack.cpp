#include <iostream>
#include <stack>

int main() {
    // Declaration and initialization of a stack
    std::stack<int> myStack;

    // Pushing elements onto the stack
    myStack.push(1);
    myStack.push(2);
    myStack.push(3);

    // Accessing the top element of the stack
    std::cout << "Top element of the stack: " << myStack.top() << std::endl;

    // Size of the stack
    std::cout << "Size of the stack: " << myStack.size() << std::endl;

    // Checking if the stack is empty
    if (myStack.empty()) {
        std::cout << "Stack is empty." << std::endl;
    } else {
        std::cout << "Stack is not empty." << std::endl;
    }

    // Popping elements from the stack
    myStack.pop();

    // Accessing elements after popping
    std::cout << "Elements of the stack after popping: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << std::endl;

    // Checking if the stack is empty after popping
    if (myStack.empty()) {
        std::cout << "Stack is empty after popping." << std::endl;
    } else {
        std::cout << "Stack is not empty after popping." << std::endl;
    }

    return 0;
}
