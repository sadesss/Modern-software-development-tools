#ifndef IPRODUCT_H
#define IPRODUCT_H

#include <string>

class IProduct {
public:
    virtual std::string getName() const = 0;
    virtual std::string getVersion() const = 0;
    virtual std::string getDescription() const = 0;
    virtual ~IProduct() = default; // Виртуальный деструктор
};

#endif // IPRODUCT_H
