#pragma once
#include "Garage.h"

class Car: public Garage{
private:
    string brand;
    string model;
    string engine_capacity;
    string color;
    string transmission_type;

public:
    Car();
    Car(string brand);
    Car(const Car& Car_copy);
    ~Car();

    string get_brand() const;
    void set_brand(string Car_brand);

    string get_model() const;
    void set_model(string Car_model);

    string get_engine_capacity() const;
    void set_engine_capacity(string Car_engine_capacity);

    string get_color() const;
    void set_color(string Car_color);

    string get_transmission_type() const;
    void set_transmission_type(string Car_transmission_type);

    void printInfo() override;
    void edit() override;
    void save() override;
};
