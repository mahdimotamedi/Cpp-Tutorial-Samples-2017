#include <iostream>
#include <vector>

int main() {
    // Declaration and initialization of a vector
    std::vector<int> myVector = {1, 2, 3, 4, 5};

    // Inserting elements at the end of the vector
    myVector.push_back(6);
    myVector.push_back(7);

    // Accessing elements using index
    std::cout << "Elements of the vector: ";
    for (size_t i = 0; i < myVector.size(); ++i) {
        std::cout << myVector[i] << " ";
    }
    std::cout << std::endl;

    // Modifying elements
    myVector[2] = 10; // changing the 3rd element (index 2) to 10

    // Deleting elements
    myVector.pop_back(); // removing the last element

    // Accessing elements using iterators
    std::cout << "Elements of the vector (using iterators): ";
    for (auto it = myVector.begin(); it != myVector.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the vector (using range-based for loop): ";
    for (int element : myVector) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Size of the vector
    std::cout << "Size of the vector: " << myVector.size() << std::endl;

    // Checking if the vector is empty
    if (myVector.empty()) {
        std::cout << "Vector is empty." << std::endl;
    } else {
        std::cout << "Vector is not empty." << std::endl;
    }

    return 0;
}
