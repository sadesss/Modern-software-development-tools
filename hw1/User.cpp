#include "User.h"
#include <iostream>

User::User(const std::string& name) : username(name) {}

void User::downloadApp(IProduct* app) {
    downloadedApps.push_back(app);
    std::cout << "User " << username << " downloaded: " << app->getName() << std::endl;
}

void User::removeApp(const std::string& appName) {
    for (auto it = downloadedApps.begin(); it != downloadedApps.end(); ++it) {
        if ((*it)->getName() == appName) {
            std::cout << "User " << username << " removed: " << appName << std::endl;
            downloadedApps.erase(it);
            return;
        }
    }
    std::cout << "User " << username << " could not find app: " << appName << std::endl;
}

void User::listDownloadedApps() const {
    std::cout << "Downloaded apps for user " << username << ":" << std::endl;
    for (const auto& app : downloadedApps) {
        std::cout << "Name: " << app->getName()
                  << ", Version: " << app->getVersion()
                  << ", Description: " << app->getDescription() << std::endl;
    }
}
std::string User::getDownloadedApps() const {
    std::string result;
    for (const auto& app : downloadedApps) {
        result += app->getName() + " ";  // Используем указатель для доступа к getName()
    }
    return result;
}

// Заглушка для рекомендаций
void User::recommendApps() const {
    std::cout << "Recommendations for " << username << ": [Not implemented yet]" << std::endl;
}

std::string User::getUsername() const {
    return username;
}
