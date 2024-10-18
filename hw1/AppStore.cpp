#include "AppStore.h"
#include <iostream>

void AppStore::addProduct(Application* app) {
    products.push_back(app);
}

void AppStore::removeProduct(const std::string& appName) {
    for (auto it = products.begin(); it != products.end(); ++it) {
        if ((*it)->getName() == appName) {
            products.erase(it);
            std::cout << appName << " has been removed from the store." << std::endl;
            return;
        }
    }
    std::cout << appName << " not found in the store." << std::endl;
}

const std::basic_string<char> AppStore::listProducts() const {
    std::string result;
    for (const auto& app : products) {
        result += app->getName() + " ";
    }
    return result; // Теперь метод возвращает строку
}
