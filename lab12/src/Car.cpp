#include "Car.h"

Car::Car(int a, int b) : x(a), y(b){}

Car Car::operator++(int){
	Car tmp = *this;  
    y++; 
	return tmp; 
}

Car& Car::operator++(){
	++y;
	return *this;
}

Car Car::operator--(int){
	Car tmp = *this;
    if(y > 0){
        y--;
    }
	return tmp; 
}

Car& Car::operator--(){
    if(y > 0){
        --y;
    }
	return *this;
}

Car Car::operator+(int a){
    y += a;
    return *this;
}

Car Car::operator-(int a){
    if((y - a) > 0){
        y -= a;
    } else {
        y = 0;
    }
    return *this;
}

Car Car::operator*(int a){
    y *= a;
    return *this;
}

int Car::getY(){
    return y;
}

ostream &operator<<(ostream &stream, const Car &other)
{
    stream << "typ: " << other.x << ", ilosc sztuk: " << other.y << endl;
    return stream;
}