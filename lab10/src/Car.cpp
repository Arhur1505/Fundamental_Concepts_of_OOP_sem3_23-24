#include "Car.h"

Car::Car(){}

Car::Car(int a, int b) : type(a), item(b){}

void Car::Print() const{
    cout << "typ: " << type << ", ilosc sztuk: " << item << endl; 
}