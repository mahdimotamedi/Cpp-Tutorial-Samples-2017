#include <iostream>
#include <queue>

int main() {
    // Declaration and initialization of a queue
    std::queue<int> myQueue;

    // Pushing elements into the queue
    myQueue.push(1);
    myQueue.push(2);
    myQueue.push(3);

    // Accessing the front element of the queue
    std::cout << "Front element of the queue: " << myQueue.front() << std::endl;

    // Accessing the back element of the queue (not available in std::queue)
    std::cout << "Back element of the queue: " << "Not available in std::queue" << std::endl;

    // Size of the queue
    std::cout << "Size of the queue: " << myQueue.size() << std::endl;

    // Checking if the queue is empty
    if (myQueue.empty()) {
        std::cout << "Queue is empty." << std::endl;
    } else {
        std::cout << "Queue is not empty." << std::endl;
    }

    // Popping elements from the queue
    myQueue.pop();

    // Accessing elements after popping
    std::cout << "Elements of the queue after popping: ";
    while (!myQueue.empty()) {
        std::cout << myQueue.front() << " ";
        myQueue.pop();
    }
    std::cout << std::endl;

    // Checking if the queue is empty after popping
    if (myQueue.empty()) {
        std::cout << "Queue is empty after popping." << std::endl;
    } else {
        std::cout << "Queue is not empty after popping." << std::endl;
    }

    return 0;
}
