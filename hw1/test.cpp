#include <iostream>
#include <memory>
#include "Application.h"
#include "AppStore.h"
#include "User.h"

void testAddProduct() {
    std::cout << "Testing addProduct()..." << std::endl;

    AppStore store;
    auto app = std::make_shared<Application>("TestApp", "1.0", "Test application for testing."); // Используем shared_ptr

    store.addProduct(app.get()); // Передаем указатель на приложение

    // Проверяем, что продукт добавлен
    std::string products = store.listProducts();
    if (products.find("TestApp") != std::string::npos) {
        std::cout << "addProduct() test passed." << std::endl;
    } else {
        std::cout << "addProduct() test failed." << std::endl;
    }

    std::cout << "Finished testing addProduct()." << std::endl;
}

void testRemoveProduct() {
    std::cout << "Testing removeProduct()..." << std::endl;

    AppStore store;
    auto app = std::make_shared<Application>("TestApp", "1.0", "Test application for testing.");
    store.addProduct(app.get());
    store.removeProduct("TestApp");

    // Проверяем, что продукт удален
    std::string products = store.listProducts();
    if (products.find("TestApp") == std::string::npos) {
        std::cout << "removeProduct() test passed." << std::endl;
    } else {
        std::cout << "removeProduct() test failed." << std::endl;
    }

    std::cout << "Finished testing removeProduct()." << std::endl;
}

void testDownloadApp() {
    std::cout << "Testing downloadApp()..." << std::endl;

    User user("Alice");
    auto app = std::make_shared<Application>("TestApp", "1.0", "Test application for testing.");
    user.downloadApp(app.get());  // Передаем указатель на приложение

    // Проверяем, что приложение загружено
    std::string downloadedApps = user.getDownloadedApps();
    if (downloadedApps == "TestApp ") {
        std::cout << "downloadApp() test passed." << std::endl;
    } else {
        std::cout << "downloadApp() test failed." << std::endl;
    }

    std::cout << "Finished testing downloadApp()." << std::endl;
}

void testRemoveApp() {
    std::cout << "Testing removeApp()..." << std::endl;

    User user("Alice");
    auto app = std::make_shared<Application>("TestApp", "1.0", "Test application for testing.");
    user.downloadApp(app.get());
    user.removeApp("TestApp");

    // Проверяем, что приложение удалено
    if (user.getDownloadedApps().empty()) {
        std::cout << "removeApp() test passed." << std::endl;
    } else {
        std::cout << "removeApp() test failed." << std::endl;
    }

    std::cout << "Finished testing removeApp()." << std::endl;
}

int main() {
    std::cout << "Starting tests..." << std::endl;

    testAddProduct();
    testRemoveProduct();
    testDownloadApp();
    testRemoveApp();

    std::cout << "All tests completed." << std::endl;

    return 0;
}
