#include "CarRental.h"

void CarRental::Remove(){
    if(v.empty()){
       cout << "BLAD: Pusto !" << endl; 
    } else {
        Car deleted = v.back();
        v.pop_back();
    }
}

void CarRental::Add(const Car& car){
    v.push_back(car);
}

Car& CarRental::operator[](const int index){
    return v[index];
}

CarRental CarRental::operator+(int a){
    for(int i = 0; i < v.size(); i++){
        v[i] + a;
    }
    return *this;
}

CarRental CarRental::operator-(int a){
    for(int i = 0; i < v.size(); i++){
        v[i] - a;      
    }
    return *this;
}

CarRental CarRental::operator*(int a){
    for(int i = 0; i < v.size(); i++){
        v[i] * a;
    }
    return *this;
}

void CarRental::Clear(){
    v.clear();
}

ostream &operator<<(ostream &stream, const CarRental &other)
{
    stream << "---" << endl << "# Zawartosc/sklad:" << endl;
    for(int i = 0; i < other.v.size(); ++i){
        stream << other.v[i];
    }
    stream <<"---" << endl;
    return stream;
}