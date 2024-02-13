#include <iostream>
#include <vector>
#include <string>

int main() {
    // Declaration and initialization of a vector of strings
    std::vector<std::string> myStringVector = {"apple", "banana", "orange"};

    // Inserting elements at the end of the vector
    myStringVector.push_back("grape");
    myStringVector.push_back("pineapple");

    // Accessing elements using index
    std::cout << "Elements of the string vector: ";
    for (size_t i = 0; i < myStringVector.size(); ++i) {
        std::cout << myStringVector[i] << " ";
    }
    std::cout << std::endl;

    // Modifying elements
    myStringVector[2] = "pear"; // changing the 3rd element (index 2) to "pear"

    // Deleting elements
    myStringVector.pop_back(); // removing the last element

    // Accessing elements using iterators
    std::cout << "Elements of the string vector (using iterators): ";
    for (auto it = myStringVector.begin(); it != myStringVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the string vector (using range-based for loop): ";
    for (const std::string& element : myStringVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Size of the vector
    std::cout << "Size of the string vector: " << myStringVector.size() << std::endl;

    // Checking if the vector is empty
    if (myStringVector.empty()) {
        std::cout << "String vector is empty." << std::endl;
    } else {
        std::cout << "String vector is not empty." << std::endl;
    }

    return 0;
}
