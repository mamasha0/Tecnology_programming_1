#include <iostream>
#include "Keeper.h"
#include "Car.hpp"
#include "Bike.hpp"
#include "Bus.hpp"
using namespace std;

void menu() {
    cout << "1. Add an transport" << endl <<
        "2. Output a list of garage" << endl <<
        "3. Delete transport" << endl <<
        "4. Edit transport" << endl <<
        "5. Save data" << endl <<
        "6. Upload data" << endl <<
        "0. Exit" << endl <<
        "Select the menu item: ";
}

int main() {

    Keeper* keeper;
    keeper = new Keeper;

    int input_point = 1;
    int input_number;
    while (input_point != 0) {
        menu();
        cin >> input_point;
        switch (input_point) {
        case 1:
            cout << "Choose transport to add (Car-0; Bike-1; Bus-2): ";
            cin >> input_number;
            if (input_number == 0) {
                Car* car;
                car = new Car;
                car->edit();
                keeper->add(car);
            }
            else if (input_number == 1) {
                Bike* bike;
                bike = new Bike;
                bike->edit();
                keeper->add(bike);
            }
            else if (input_number == 2) {
                Bus* bus;
                bus = new Bus;
                bus->edit();
                keeper->add(bus);
            }
            break;
        case 2:
            cout << "\033[94mCount Garage: " << keeper->get_len() << "\033[0m" << endl;
            keeper->show();
            break;
        case 3:
            cout << "Enter index of transport to remove: ";
            cin >> input_number;
            keeper->remove(input_number);
            break;
        case 4:
            cout << "Enter index of transport to edit: ";
            cin >> input_number;
            keeper->edit(input_number);
            break;
        case 5:
            keeper->save();
            break;
        case 6:
            keeper->load();
            break;
        default:
            break;
        }
    }
    keeper->~Keeper();
    cout << "Program shutdown by user.";
    return 0;
}
