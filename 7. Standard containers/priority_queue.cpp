#include <iostream>
#include <queue> // Include the priority_queue header

int main() {
    // Declaration and initialization of a priority_queue
    std::priority_queue<int> myPriorityQueue;

    // Pushing elements into the priority_queue
    myPriorityQueue.push(3);
    myPriorityQueue.push(1);
    myPriorityQueue.push(4);
    myPriorityQueue.push(1); // Duplicate elements are allowed

    // Accessing the top element of the priority_queue (the highest priority element)
    std::cout << "Top element of the priority_queue: " << myPriorityQueue.top() << std::endl;

    // Size of the priority_queue
    std::cout << "Size of the priority_queue: " << myPriorityQueue.size() << std::endl;

    // Checking if the priority_queue is empty
    if (myPriorityQueue.empty()) {
        std::cout << "Priority queue is empty." << std::endl;
    } else {
        std::cout << "Priority queue is not empty." << std::endl;
    }

    // Popping elements from the priority_queue
    myPriorityQueue.pop();

    // Accessing elements after popping
    std::cout << "Elements of the priority_queue after popping: ";
    while (!myPriorityQueue.empty()) {
        std::cout << myPriorityQueue.top() << " ";
        myPriorityQueue.pop();
    }
    std::cout << std::endl;

    // Checking if the priority_queue is empty after popping
    if (myPriorityQueue.empty()) {
        std::cout << "Priority queue is empty after popping." << std::endl;
    } else {
        std::cout << "Priority queue is not empty after popping." << std::endl;
    }

    return 0;
}
