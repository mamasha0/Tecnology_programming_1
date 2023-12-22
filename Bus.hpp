#pragma once
#include "Garage.h"

class Bus: public Garage{
private:
    string brand;
    string model;
    string passenger_seats;
    string total_number_of_seats;
    string destination;

public:
    Bus();
    Bus(string brand);
    Bus(const Bus& Bus_copy);
    ~Bus();

    string get_brand() const;
    void set_brand(string Bus_brand);

    string get_model() const;
    void set_model(string Bus_model);

    string get_passenger_seats() const;
    void set_passenger_seats(string Bus_passenger_seats);

    string get_total_number_of_seats() const;
    void set_total_number_of_seats(string Bus_total_number_of_seats);

    string get_destination() const;
    void set_destination(string Bus_destination);

    void printInfo() override;
    void edit() override;
    void save() override;
};
