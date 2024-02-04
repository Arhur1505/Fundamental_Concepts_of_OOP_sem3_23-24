#ifndef CARRENTAL_H
#define CARRENTAL_H

#include <iostream>
#include <vector>
#include "Car.h"

using namespace std;

class CarRental {
    friend ostream &operator<<(ostream &stream, const CarRental &other);

    private:
        vector <Car> v;
    
    public:
        
        void Remove();
        void Add(const Car& car);
        Car &operator[](const int index);
        CarRental operator+(int a);
        CarRental operator-(int a);
        CarRental operator*(int a);
        void Clear();
};

ostream &operator<<(ostream &stream, const CarRental &other);

#endif