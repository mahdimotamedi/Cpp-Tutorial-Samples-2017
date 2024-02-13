#include <iostream>
#include <deque>

int main() {
    // Declaration and initialization of a deque
    std::deque<int> myDeque = {1, 2, 3, 4, 5};

    // Inserting elements at the end of the deque
    myDeque.push_back(6);
    myDeque.push_back(7);

    // Inserting elements at the beginning of the deque
    myDeque.push_front(0);

    // Accessing elements using index
    std::cout << "Elements of the deque: ";
    for (size_t i = 0; i < myDeque.size(); ++i) {
        std::cout << myDeque[i] << " ";
    }
    std::cout << std::endl;

    // Modifying elements
    myDeque[2] = 10; // changing the 3rd element (index 2) to 10

    // Deleting elements from the end
    myDeque.pop_back();

    // Deleting elements from the beginning
    myDeque.pop_front();

    // Accessing elements using iterators
    std::cout << "Elements of the deque (using iterators): ";
    for (auto it = myDeque.begin(); it != myDeque.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the deque (using range-based for loop): ";
    for (int element : myDeque) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Size of the deque
    std::cout << "Size of the deque: " << myDeque.size() << std::endl;

    // Checking if the deque is empty
    if (myDeque.empty()) {
        std::cout << "Deque is empty." << std::endl;
    } else {
        std::cout << "Deque is not empty." << std::endl;
    }

    return 0;
}
