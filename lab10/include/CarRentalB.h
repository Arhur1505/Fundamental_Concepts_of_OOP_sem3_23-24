#ifndef CARRENTALB_H
#define CARRENTALB_H

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

class CarRentalB{
    private:
        Car* tab; 
        int size = 0;

    public:
        CarRentalB();
        ~CarRentalB();
        CarRentalB(const CarRentalB& other);
        CarRentalB& operator=(const CarRentalB& other);

        void Add(const Car e1);
        void Remove();
        void Clear();
        void Print() const;
};

#endif