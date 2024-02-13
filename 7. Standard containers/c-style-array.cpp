#include <iostream>

int main() {
    // Declaration and initialization of a C-style array
    int myArray[5] = {1, 2, 3, 4, 5};

    // Accessing elements using indexes
    std::cout << "Elements of the array: ";
    for (size_t i = 0; i < sizeof(myArray) / sizeof(myArray[0]); ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Size of the array
    std::cout << "Size of the array: " << sizeof(myArray) / sizeof(myArray[0]) << std::endl;

    // Accessing first and last element
    std::cout << "First element of the array: " << myArray[0] << std::endl;
    std::cout << "Last element of the array: " << myArray[sizeof(myArray) / sizeof(myArray[0]) - 1] << std::endl;

    // Modifying elements
    myArray[2] = 10; // changing the 3rd element (index 2) to 10

    // Accessing elements after modification
    std::cout << "Elements of the array after modification: ";
    for (int element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}
