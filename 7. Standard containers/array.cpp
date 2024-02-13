#include <iostream>
#include <array>

int main() {
    // Declaration and initialization of an array
    std::array<int, 5> myArray = {1, 2, 3, 4, 5};

    // Accessing elements using indexes
    std::cout << "Elements of the array: ";
    for (size_t i = 0; i < myArray.size(); ++i) {
        std::cout << myArray[i] << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the array (using range-based for loop): ";
    for (int element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Size of the array
    std::cout << "Size of the array: " << myArray.size() << std::endl;

    // Accessing first and last element
    std::cout << "First element of the array: " << myArray.front() << std::endl;
    std::cout << "Last element of the array: " << myArray.back() << std::endl;

    // Checking if the array is empty (not applicable for std::array)
    std::cout << "Array is not empty." << std::endl;

    // Filling the array with a specific value
    myArray.fill(0);

    // Accessing elements after filling
    std::cout << "Elements of the array after filling: ";
    for (int element : myArray) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Checking if the array is empty after filling (not applicable for std::array)
    std::cout << "Array is not empty after filling." << std::endl;

    return 0;
}
