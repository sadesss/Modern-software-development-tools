#ifndef APPLICATION_H
#define APPLICATION_H

#include "IProduct.h"

class Application : public IProduct {
private:
    std::string name;
    std::string version;
    std::string description;

public:
    Application(const std::string& appName, const std::string& appVersion, const std::string& appDescription);

    std::string getName() const override;
    std::string getVersion() const override;
    std::string getDescription() const override;
};

#endif // APPLICATION_H
