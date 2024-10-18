#include "Application.h"

Application::Application(const std::string& appName, const std::string& appVersion, const std::string& appDescription)
        : name(appName), version(appVersion), description(appDescription) {}

std::string Application::getName() const {
    return name;
}

std::string Application::getVersion() const {
    return version;
}

std::string Application::getDescription() const {
    return description;
}
