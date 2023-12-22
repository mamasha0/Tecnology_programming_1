#pragma once
#include <string>

using namespace std;

class Garage {
public:
    Garage() {};
    virtual ~Garage() {};

    virtual void printInfo() = 0;
    virtual void edit() = 0;
    virtual void save() = 0;
};
