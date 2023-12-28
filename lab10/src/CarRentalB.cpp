#include "CarRentalB.h"

CarRentalB::CarRentalB(){
    tab = new Car[10];
}

CarRentalB::~CarRentalB(){
    if(tab!=nullptr){
        delete[] tab;
    }
}

CarRentalB::CarRentalB(const CarRentalB& other){
    if(this != &other){
        tab = new Car[10];
        size = other.size;
        for(int i = 0; i < size; ++i){
            tab[i] = other.tab[i];
        }
    }
}

CarRentalB& CarRentalB::operator=(const CarRentalB& other){
    if(this != &other){
        delete[] tab;
        tab = new Car[10];
        size = other.size;
        for(int i = 0; i < size; ++i){
            tab[i] = other.tab[i];
        }
    }
    return *this;
}

void CarRentalB::Remove(){
    if(size == 0){
        cout << "BLAD: Pusto !" << endl;
    }else{
        size--;
    }
}

void CarRentalB::Add(const Car e1){
    tab[size] = e1;
    size++;
}

void CarRentalB::Clear(){
    size = 0; 
}

void CarRentalB::Print() const{
    cout << "---" << endl;
    cout << "# Zawartosc/sklad:" << endl;
    for (int i = 0; i < size; i++){
        tab[i].Print();
    }
    cout << "---" << endl;
}