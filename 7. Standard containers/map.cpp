#include <iostream>
#include <map>
#include <string>

int main() {
    // Declaration and initialization of a map
    std::map<int, std::string> myMap;

    // Inserting elements into the map
    myMap[1] = "one";
    myMap[2] = "two";
    myMap[3] = "three";

    // Inserting elements using std::make_pair
    myMap.insert(std::make_pair(4, "four"));

    // Accessing elements using iterators
    std::cout << "Elements of the map (using iterators): ";
    for (auto it = myMap.begin(); it != myMap.end(); ++it) {
        std::cout << it->first << ":" << it->second << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the map (using range-based for loop): ";
    for (const auto& pair : myMap) {
        std::cout << pair.first << ":" << pair.second << " ";
    }
    std::cout << std::endl;

    // Size of the map
    std::cout << "Size of the map: " << myMap.size() << std::endl;

    // Checking if a key is present in the map
    int key = 2;
    if (myMap.count(key) > 0) {
        std::cout << "Key " << key << " is present in the map." << std::endl;
    } else {
        std::cout << "Key " << key << " is not present in the map." << std::endl;
    }

    // Erasing elements from the map
    myMap.erase(3);

    // Clearing the map
    myMap.clear();

    // Checking if the map is empty after clearing
    if (myMap.empty()) {
        std::cout << "Map is empty after clearing." << std::endl;
    } else {
        std::cout << "Map is not empty after clearing." << std::endl;
    }

    return 0;
}
