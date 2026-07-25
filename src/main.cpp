#include <iostream>
#include <unordered_map>
#include <string>

int main() {
    std::unordered_map<std::string, std::string> storage;
    std::string command;

    std::cout << "Welcome! Commands: set, get, list, exit\n";
    while (true) {
        std::cout << ">";
        std::cin >> command;
        if (command == "set") {
            std::string key, value;
            std::cout << "Key :";
            std::cin>> key;
            std::cout << "Value :";
            std::cin>> value;
            storage[key] = value;
        }else if (command == "get") {
            std::string key;
            std::cout << "Key :";
            std::cin>> key;
            //checking if the key exist in the storage :
            if (storage.find(key) != storage.end()) {
                std::cout << "Value : " << storage[key] << std::endl;
            }else {
                std::cout << "Key not found!" << std::endl;
            }
        }else if (command == "list") {
            for (const  auto& pair : storage ) {
                std::cout << pair.first << " : " << pair.second << std::endl;
            }
        }else if (command == "exit") {
            break;
        } else {
            std::cout << "Unknown command.\n";
        }
    }
    return 0;
}
