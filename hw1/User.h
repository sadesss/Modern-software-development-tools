#ifndef USER_H
#define USER_H

#include <vector>
#include <string>
#include "IProduct.h"

class User {
private:
    std::string username;
    std::vector<IProduct*> downloadedApps; // Список скачанных приложений

public:
    User(const std::string& name);

    void downloadApp(IProduct* app);
    void removeApp(const std::string& appName);
    void listDownloadedApps() const;
    std::string getDownloadedApps() const;

    // Заглушка для рекомендаций
    void recommendApps() const;

    std::string getUsername() const;
};

#endif // USER_H
