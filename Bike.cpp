#include "Bike.hpp"
#include <iostream>
#include <fstream>

using namespace std;

Bike::Bike(){
    cout << "\033[90mBike constructor called\033[0m" << endl;
}

Bike::Bike(string brand){
    this->brand = std::move(brand);
}

Bike::Bike(const Bike& Bike_copy){
    brand = Bike_copy.brand;
    model = Bike_copy.model;
    engine_capacity = Bike_copy.engine_capacity;
    engine_power = Bike_copy.engine_power;
    terrain = Bike_copy.terrain;;
}

Bike::~Bike(){
    cout << "\033[90mBike destructor called\033[0m" << endl;
}

string Bike::get_brand() const {
    return brand;
}

void Bike::set_brand(string Bike_brand){
    brand = std::move(Bike_brand);
}

string Bike::get_model() const {
    return model;
}

void Bike::set_model(string Bike_model){
    model = std::move(Bike_model);
}

string Bike::get_engine_capacity() const {
    return engine_capacity;
}

void Bike::set_engine_capacity(string Bike_engine_capacity){
    engine_capacity = std::move(Bike_engine_capacity);
}

string Bike::get_engine_power() const {
    return engine_power;
}

void Bike::set_engine_power(string Bike_engine_power){
    engine_power = std::move(Bike_engine_power);
}

string Bike::get_terrain() const {
    return terrain;
}

void Bike::set_terrain(string Bike_terrain){
    terrain = std::move(Bike_terrain);
}

void Bike::printInfo () {
    cout << "\033[94mBike:" << endl;
    cout << "\tbrand: " << brand << endl;
    cout << "\tmodel: " << model << endl;
    cout << "\tengine_capacity: " << engine_capacity << endl;
    cout << "\tengine_power: " << engine_power << endl;
    cout << "\tterrain: " << terrain << endl;
    cout << "\033[0m" << endl;
}

void Bike::edit() {
    cout << "\033[93mEnter data for Bike" << endl;
    if (brand == ""){
        cout << "Enter brand: ";
    } else {
        cout << "Enter brand (current - " << brand << "): ";
    }
    cin >> brand;
    if (model == ""){
        cout << "Enter model: ";
    } else {
        cout << "Enter model (current - " << model << "): ";
    }
    cin >> model;
    if (engine_capacity == ""){
        cout << "Enter engine_capacity: ";
    } else {
        cout << "Enter engine_capacity (current - " << engine_capacity << "): ";
    }
    cin >> engine_capacity;
    if (engine_power == ""){
        cout << "Enter engine_power: ";
    } else {
        cout << "Enter engine_power (current - " << engine_power << "): ";
    }
    cin >> engine_power;
    if (terrain == ""){
        cout << "Enter terrain: ";
    } else {
        cout << "Enter terrain (current - " << terrain << "): ";
    }
    cin >> terrain;
    cout << "\033[0m" << endl;
}

void Bike::save() {
    ofstream file;
    string file_name = "Garage.txt";
    file.open(file_name, ios::app);
    if (!file){
        cout << "\033[91mError while opening file "<< file_name <<" to load data.\033[0m";
        return;
    }
    file << 2 << endl <<
         brand << endl <<
         model << endl <<
         engine_capacity << endl <<
         engine_power << endl <<
         terrain << endl;
    file.close();
}
