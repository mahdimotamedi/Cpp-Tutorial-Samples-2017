#include <iostream>
#include <algorithm>
#include <list>

int main() {
    // Declaration and initialization of a list
    std::list<int> myList = {1, 2, 3, 4, 5};

    // Inserting elements at the end of the list
    myList.push_back(6);
    myList.push_back(7);

    // Inserting elements at the beginning of the list
    myList.push_front(0);

    // Inserting elements at a specific position
    auto it = std::find(myList.begin(), myList.end(), 3);
    if (it != myList.end()) {
        myList.insert(it, 8);
    }

    // Accessing elements using iterators
    std::cout << "Elements of the list (using iterators): ";
    for (auto it = myList.begin(); it != myList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the list (using range-based for loop): ";
    for (int element : myList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Size of the list
    std::cout << "Size of the list: " << myList.size() << std::endl;

    // Checking if the list is empty
    if (myList.empty()) {
        std::cout << "List is empty." << std::endl;
    } else {
        std::cout << "List is not empty." << std::endl;
    }

    // Deleting elements
    myList.pop_back(); // removing the last element
    myList.pop_front(); // removing the first element
    myList.erase(std::find(myList.begin(), myList.end(), 3)); // removing element 3

    // Clearing the list
    myList.clear();

    // Checking if the list is empty after clearing
    if (myList.empty()) {
        std::cout << "List is empty after clearing." << std::endl;
    } else {
        std::cout << "List is not empty after clearing." << std::endl;
    }

    return 0;
}
