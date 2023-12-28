#include "CarRentalC.h"

CarRentalC::CarRentalC(){
    tab = new Car[10];
}

CarRentalC::~CarRentalC(){
    if(tab!=nullptr){
        delete[] tab;
    }
}

CarRentalC::CarRentalC(const CarRentalC& other){
    if(this != &other){
        tab = new Car[10];
        size = other.size;
        for(int i = 0; i < size; ++i){
            tab[i] = other.tab[i];
        }
    }
}

CarRentalC& CarRentalC::operator=(const CarRentalC& other){
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


CarRentalC::CarRentalC(CarRentalC&& other) : tab(other.tab), size(other.size){
    other.tab = nullptr;
    other.size = 0;
}

CarRentalC& CarRentalC::operator=(CarRentalC&& other){
    if(this != &other){
        delete[] tab;
        tab = other.tab;
        size = other.size;
        other.tab = nullptr;
        other.size = 0;
    }
    return *this;
}


void CarRentalC::Remove(){
    if(size == 0){
        cout << "BLAD: Pusto !" << endl;
    }else{
        size--;
    }
}

void CarRentalC::Add(const Car e1){
    tab[size] = e1;
    size++;
}

void CarRentalC::Clear(){
    size = 0; 
}

void CarRentalC::Print() const{
    cout << "---" << endl;
    cout << "# Zawartosc/sklad:" << endl;
    for(int i = 0; i < size; i++){
        tab[i].Print();
    }
    cout << "---" << endl;
}