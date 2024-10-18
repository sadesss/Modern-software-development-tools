#include <iostream>
#include "Application.h"
#include "AppStore.h"
#include "User.h"

int main() {
    // Создаем приложения
    Application app1("App1", "1.0", "This is the first application.");
    Application app2("App2", "1.1", "This is the second application.");

    // Создаем магазин приложений
    AppStore store;
    store.addProduct(&app1);
    store.addProduct(&app2);

    // Список доступных приложений
    std::cout << "Available apps in the store:" << std::endl;
    std::cout << store.listProducts() << std::endl;  // Добавлено для вывода доступных приложений

    // Создаем пользователя
    User user("Alice");
    user.downloadApp(&app1);
    user.downloadApp(&app2);

    // Список загруженных приложений
    std::cout << "Downloaded apps for " << user.getUsername() << ":" << std::endl;
    user.listDownloadedApps();

    // Удаление приложения
    user.removeApp("App1");
    std::cout << "After removing App1:" << std::endl;
    user.listDownloadedApps();

    // Рекомендации (пока заглушка)
    user.recommendApps();

    return 0;
}
