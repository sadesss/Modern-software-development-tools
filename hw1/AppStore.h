#ifndef APPSTORE_H
#define APPSTORE_H

#include <vector>
#include "IStore.h"

class AppStore : public IStore {
private:
    std::vector<IProduct*> products; // Список продуктов

public:
    void addProduct(Application* app) override;
    void removeProduct(const std::string& productName) override;
    const std::basic_string<char> listProducts() const override;
};

#endif // APPSTORE_H
