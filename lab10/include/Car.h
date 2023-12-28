#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <string>

using namespace std;

class Car{
    private:
        int type;
        int item;

    public:
        Car();
        Car(int a, int b);
        void Print() const;
};

#endif