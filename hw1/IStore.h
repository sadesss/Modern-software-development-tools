#ifndef ISTORE_H
#define ISTORE_H

#include <string>
#include "Application.h"

class IStore {
public:
    virtual ~IStore() = default;
    virtual void addProduct(Application* app) = 0;
    virtual void removeProduct(const std::string& appName) = 0;
    virtual const std::basic_string<char> listProducts() const = 0; // Изменяем void на std::string
};

#endif // ISTORE_H
