#pragma once
#include "Garage.h"

typedef struct Queue{
    Garage* data;
    Queue* next;
} Queue;


class Keeper{
private:
    int len = 0;
    Queue* head = NULL;
public:
    Keeper();
    Keeper(int size);
    ~Keeper();

    int get_len();

    Garage* operator[](int index);
    void add(Garage* n_data);
    void edit(int index);
    void remove(int index);
    void clear();

    void save();
    void load();
    void show();
};
