#ifndef CAR_H
#define CAR_H

#include <iostream>
#include <vector>

using namespace std;

class Car {
    friend ostream &operator<<(ostream &stream, const Car &other);

    private:
        int x;
        int y;
    
    public:
        Car(int a, int b);
        Car operator++(int);
        Car& operator++();
        Car operator--(int);
        Car& operator--();
        Car operator+(int a);
        Car operator-(int a);
        Car operator*(int a);
        int getY();
};

ostream &operator<<(ostream &stream, const Car &other);

#endif