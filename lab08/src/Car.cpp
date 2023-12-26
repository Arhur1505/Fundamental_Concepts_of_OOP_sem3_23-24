#include "Car.h"

Car::Car() {}

Car::Car(int a, int b) : x(a), y(b) {}

void Car::SetCard(int y) {
    this->y = y;
}

void Car::Print() const {
    cout << "typ: " << x << ", ilosc sztuk: " << y << endl;
}
