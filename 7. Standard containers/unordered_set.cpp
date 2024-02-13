#include <iostream>
#include <unordered_set>

int main() {
    // Declaration and initialization of an unordered_set
    std::unordered_set<int> myUnorderedSet;

    // Inserting elements into the unordered_set
    myUnorderedSet.insert(3);
    myUnorderedSet.insert(1);
    myUnorderedSet.insert(4);
    myUnorderedSet.insert(1); // Duplicate element, will be ignored

    // Accessing elements using iterators
    std::cout << "Elements of the unordered_set (using iterators): ";
    for (auto it = myUnorderedSet.begin(); it != myUnorderedSet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the unordered_set (using range-based for loop): ";
    for (int element : myUnorderedSet) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Size of the unordered_set
    std::cout << "Size of the unordered_set: " << myUnorderedSet.size() << std::endl;

    // Checking if an element is present in the unordered_set
    int key = 2;
    if (myUnorderedSet.find(key) != myUnorderedSet.end()) {
        std::cout << "Element " << key << " is present in the unordered_set." << std::endl;
    } else {
        std::cout << "Element " << key << " is not present in the unordered_set." << std::endl;
    }

    // Erasing elements from the unordered_set
    myUnorderedSet.erase(1);

    // Clearing the unordered_set
    myUnorderedSet.clear();

    // Checking if the unordered_set is empty after clearing
    if (myUnorderedSet.empty()) {
        std::cout << "Unordered set is empty after clearing." << std::endl;
    } else {
        std::cout << "Unordered set is not empty after clearing." << std::endl;
    }

    return 0;
}
