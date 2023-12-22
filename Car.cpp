#include "Car.hpp"
#include <iostream>
#include <fstream>
using namespace std;

Car::Car(){
    cout << "\033[90mCar constructor called\033[0m" << endl;
}

Car::Car(string brand){
    this->brand = std::move(brand);
}

Car::Car(const Car& Car_copy){
    brand = Car_copy.brand;
    model = Car_copy.model;
    engine_capacity = Car_copy.engine_capacity;
    color = Car_copy.color;
    transmission_type = Car_copy.transmission_type;
}

Car::~Car(){
    cout << "\033[90mCar destructor called\033[0m" << endl;
}

string Car::get_brand() const {
    return brand;
}

void Car::set_brand(string Car_brand){
    brand = std::move(Car_brand);
}

string Car::get_model() const {
    return model;
}

void Car::set_model(string Car_model){
    model = std::move(Car_model);
}

string Car::get_engine_capacity() const {
    return engine_capacity;
}

void Car::set_engine_capacity(string Car_engine_capacity){
    engine_capacity = std::move(Car_engine_capacity);
}

string Car::get_color() const {
    return color;
}

void Car::set_color(string Car_color){
    color = std::move(Car_color);
}

string Car::get_transmission_type() const {
    return transmission_type;
}

void Car::set_transmission_type(string Car_transmission_type){
    color = std::move(Car_transmission_type);
}

void Car::printInfo () {
    cout << "\033[94mCar:" << endl;
    cout << "\tbrand: " << brand << endl;
    cout << "\tmodel: " << model << endl;
    cout << "\tengine_capacity: " << engine_capacity << endl;
    cout << "\tcolor: " << color << endl;
    cout << "\033[0m" << endl;
}

void Car::edit() {
    cout << "\033[93mEnter data for Car" << endl;
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
    if (color == ""){
        cout << "Enter color: ";
    } else {
        cout << "Enter color (current - " << color << "): ";
    }
    cin >> color;
    if (transmission_type == ""){
        cout << "Enter transmission_type: ";
    } else {
        cout << "Enter transmission_type (current - " << transmission_type << "): ";
    }
    cin >> color;
    cout << "\033[0m" << endl;
}

void Car::save() {
    ofstream file;
    string file_name = "Garage.txt";
    file.open(file_name, ios::in|ios::app);
    if (!file){
        cout << "\033[91mError while opening file "<< file_name <<" to load data.\033[0m";
        return;
    }
    file << 1 << endl <<
         brand << endl <<
         model << endl <<
         engine_capacity << endl <<
         color << endl <<
         transmission_type << endl;
    file.close();
}
  
