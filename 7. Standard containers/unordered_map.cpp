#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    // Declaration and initialization of an unordered_map
    std::unordered_map<std::string, int> myUnorderedMap;

    // Inserting elements into the unordered_map
    myUnorderedMap["one"] = 1;
    myUnorderedMap["two"] = 2;
    myUnorderedMap["three"] = 3;

    // Inserting elements using std::make_pair
    myUnorderedMap.insert(std::make_pair("four", 4));

    // Accessing elements using iterators
    std::cout << "Elements of the unordered_map (using iterators): ";
    for (auto it = myUnorderedMap.begin(); it != myUnorderedMap.end(); ++it) {
        std::cout << it->first << ":" << it->second << " ";
    }
    std::cout << std::endl;

    // Range-based for loop for iterating through elements
    std::cout << "Elements of the unordered_map (using range-based for loop): ";
    for (const auto &pair: myUnorderedMap) {
        std::cout << pair.first << ":" << pair.second << " ";
    }
    std::cout << std::endl;

    // Size of the unordered_map
    std::cout << "Size of the unordered_map: " << myUnorderedMap.size() << std::endl;

    // Checking if a key is present in the unordered_map
    std::string key = "two";
    if (myUnorderedMap.count(key) > 0) {
        std::cout << "Key " << key << " is present in the unordered_map." << std::endl;
    } else {
        std::cout << "Key " << key << " is not present in the unordered_map." << std::endl;
    }

    // Erasing elements from the unordered_map
    myUnorderedMap.erase("three");

    // Clearing the unordered_map
    myUnorderedMap.clear();

    // Checking if the unordered_map is empty after clearing
    if (myUnorderedMap.empty()) {
        std::cout << "Unordered map is empty after clearing." << std::endl;
    } else {
        std::cout << "Unordered map is not empty after clearing." << std::endl;
    }

    return 0;
}
