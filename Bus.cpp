#include "Bus.hpp"
#include <iostream>
#include <fstream>
using namespace std;

Bus::Bus(){
    cout << "\033[90mBus constructor called\033[0m" << endl;
}

Bus::Bus(string brand){
    this->brand = std::move(brand);
}

Bus::Bus(const Bus& Bus_copy){
    brand = Bus_copy.brand;
    model = Bus_copy.model;
    passenger_seats = Bus_copy.passenger_seats;
    total_number_of_seats = Bus_copy.total_number_of_seats;
    destination = Bus_copy.destination;
}

Bus::~Bus(){
    cout << "\033[90mBus destructor called\033[0m" << endl;
}

string Bus::get_brand() const {
    return brand;
}

void Bus::set_brand(string Bus_brand){
    brand = std::move(Bus_brand);
}

string Bus::get_model() const {
    return model;
}

void Bus::set_model(string Bus_model){
    model = std::move(Bus_model);
}

string Bus::get_passenger_seats() const {
    return passenger_seats;
}

void Bus::set_passenger_seats(string Bus_passenger_seats){
    passenger_seats = std::move(Bus_passenger_seats);
}

string Bus::get_total_number_of_seats() const {
    return total_number_of_seats;
}

void Bus::set_total_number_of_seats(string Bus_total_number_of_seats){
    total_number_of_seats = std::move(Bus_total_number_of_seats);
}

string Bus::get_destination() const {
    return destination;
}

void Bus::set_destination(string Bus_destination){
    destination = std::move(Bus_destination);
}

void Bus::printInfo () {
    cout << "\033[94mBus:" << endl;
    cout << "\tbrand: " << brand << endl;
    cout << "\tmodel: " << model << endl;
    cout << "\tpassenger_seats: " << passenger_seats << endl;
    cout << "\ttotal_number_of_seats: " << total_number_of_seats << endl;
    cout << "\tdestination: " << destination << endl;
    cout << "\033[0m" << endl;
}

void Bus::edit() {
    cout << "\033[93mEnter data for Bus" << endl;
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
    if (passenger_seats == ""){
        cout << "Enter passenger_seats: ";
    } else {
        cout << "Enter passenger_seats (current - " << passenger_seats << "): ";
    }
    cin >> passenger_seats;
    if (total_number_of_seats == ""){
        cout << "Enter total_number_of_seats: ";
    } else {
        cout << "Enter total_number_of_seats (current - " << total_number_of_seats << "): ";
    }
    cin >> total_number_of_seats;
    if (destination == ""){
        cout << "Enter destination: ";
    } else {
        cout << "Enter destination (current - " << destination << "): ";
    }
    cin >> destination;
    cout << "\033[0m" << endl;
}

void Bus::save() {
    ofstream file;
    string file_name = "Garage.txt";
    file.open(file_name, ios::app);
    if (!file){
        cout << "\033[91mError while opening file "<< file_name <<" to load data.\033[0m";
        return;
    }
    file << 0 << endl <<
    brand << endl <<
    model << endl <<
    passenger_seats << endl <<
    total_number_of_seats << endl <<
    destination << endl;
    file.close();
}
