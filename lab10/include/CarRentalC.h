#ifndef CARRENTALC_H
#define CARRENTALC_H

#include <iostream>
#include <string>
#include "Car.h"

using namespace std;

class CarRentalC{
    private:
        Car* tab = nullptr; 
        int size = 0;

    public:
        CarRentalC();
        ~CarRentalC();
        CarRentalC(const CarRentalC& other);
        CarRentalC& operator=(const CarRentalC& other);
        CarRentalC(CarRentalC&& other);
        CarRentalC& operator=(CarRentalC&& other);

        void Add(const Car e1);
        void Remove();
        void Clear();
        void Print() const;
};

#endif