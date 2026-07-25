#pragma once
#include <string>
#include <unordered_map>
class StorageEngine {
public:
    void set(std::string key, std::string value);
    void get(const std::string key , const std::string value);
    void list();
private:
    std::unordered_map<std::string, std::string> storage;
};