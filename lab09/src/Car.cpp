#include "Car.h"

Car::Car() {}

Car::Car(int a, int b) : x(a), y(b) {}

void Car::SetCard(int y) {
    this->y = y;
}

void Car::Print() const {
    cout << "typ: " << x << ", ilosc sztuk: " << y << endl;
}

string Car::ToString() const {
    return "<typ=" + to_string(x) + ", ilosc=" + to_string(y) + ">";
}

Car::operator int() const{
    return x;
}

Car::operator string() const {
    return ToString();
}

int Car::GetY() const {
    return y;
}

int Compare(const Car& car_1, const Car& car_2) {
    if(car_1.y > car_2.y) {
        return 1;
    }else {
        return -1;
    }
}

Car::Car(int a) : x(a), y(0){}