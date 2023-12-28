#ifndef CARRENTALA_H
#define CARRENTALA_H

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

class CarRentalA{
    private:
        Car tab[10]; 
        int size = 0;

    public:
        CarRentalA();
        CarRentalA(const CarRentalA& other);
        CarRentalA& operator=(const CarRentalA& other);

        void Add(const Car e1);
        void Remove();
        void Clear();
        void Print() const;
};

#endif