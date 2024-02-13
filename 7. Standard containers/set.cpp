#include <iostream>
#include <set>

int main() {
    // Declaration and initialization of a set
    std::set<int> mySet = {3, 1, 4, 1, 5, 9};

    // Inserting elements into the set
    mySet.insert(2);
    mySet.insert(6);

    // Accessing elements using iterators
    std::cout << "Elements of the set (using iterators): ";
    for (auto it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the set (using range-based for loop): ";
    for (int element : mySet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Size of the set
    std::cout << "Size of the set: " << mySet.size() << std::endl;

    // Checking if an element is present in the set
    int key = 5;
    if (mySet.find(key) != mySet.end()) {
        std::cout << key << " is present in the set." << std::endl;
    } else {
        std::cout << key << " is not present in the set." << std::endl;
    }

    // Erasing elements from the set
    mySet.erase(1);

    // Clearing the set
    mySet.clear();

    // Checking if the set is empty after clearing
    if (mySet.empty()) {
        std::cout << "Set is empty after clearing." << std::endl;
    } else {
        std::cout << "Set is not empty after clearing." << std::endl;
    }

    return 0;
}
