#include <iostream>
#include <forward_list>

int main() {
    // Declaration and initialization of a forward_list
    std::forward_list<int> myForwardList = {1, 2, 3, 4, 5};

    // Inserting elements at the beginning of the forward_list
    myForwardList.push_front(0);

    // Inserting elements after a specific position
    auto it = myForwardList.begin();
    ++it; // move iterator to the second position
    myForwardList.insert_after(it, 6);

    // Accessing elements using iterators
    std::cout << "Elements of the forward_list (using iterators): ";
    for (auto it = myForwardList.begin(); it != myForwardList.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the forward_list (using range-based for loop): ";
    for (int element : myForwardList) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    // Size of the forward_list
    std::cout << "Size of the forward_list: " << std::distance(myForwardList.begin(), myForwardList.end()) << std::endl;

    // Checking if the forward_list is empty
    if (myForwardList.empty()) {
        std::cout << "Forward list is empty." << std::endl;
    } else {
        std::cout << "Forward list is not empty." << std::endl;
    }

    // Deleting elements after a specific position
    it = myForwardList.begin();
    ++it; // move iterator to the second position
    myForwardList.erase_after(it); // removes element after the second position

    // Clearing the forward_list
    myForwardList.clear();

    // Checking if the forward_list is empty after clearing
    if (myForwardList.empty()) {
        std::cout << "Forward list is empty after clearing." << std::endl;
    } else {
        std::cout << "Forward list is not empty after clearing." << std::endl;
    }

    return 0;
}
