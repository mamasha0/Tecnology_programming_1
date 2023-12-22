#pragma once
#include "Garage.h"

class Bike: public Garage{
private:
    string brand;
    string model;
    string engine_capacity;
    string engine_power;
    string terrain;

public:
    Bike();
    Bike(string brand);
    Bike(const Bike& Bike_copy);
    ~Bike();

    string get_brand() const;
    void set_brand(string Bike_brand);

    string get_model() const;
    void set_model(string Bike_model);

    string get_engine_capacity() const;
    void set_engine_capacity(string Bike_engine_capacity);

    string get_engine_power() const;
    void set_engine_power(string Bike_engine_power);

    string get_terrain() const;
    void set_terrain(string Bike_terrainr);

    void printInfo() override;
    void edit() override;
    void save() override;
};
