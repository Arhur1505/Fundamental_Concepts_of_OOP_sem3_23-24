#include "CarRentalA.h"

CarRentalA::CarRentalA(){}

CarRentalA::CarRentalA(const CarRentalA& other){
    if (this != &other) {
        size = other.size;
        for (int i = 0; i < size; ++i) {
            tab[i] = other.tab[i];
        }
    }

}

CarRentalA& CarRentalA::operator=(const CarRentalA& other){
    if(this != &other){
        size = other.size;
        for(int i = 0; i < size; ++i){
            tab[i] = other.tab[i];
        }
    }
    return *this;
}

void CarRentalA::Remove(){
    if(size == 0){
        cout << "BLAD: Pusto !" << endl;
    }else{
        size--;
    }
}

void CarRentalA::Add(const Car e1){
    tab[size] = e1;
    size++;
}

void CarRentalA::Clear(){
    size = 0; 
}

void CarRentalA::Print() const{
    cout << "---" << endl;
    cout << "# Zawartosc/sklad:" << endl;
    for(int i = 0; i < size; i++){
        tab[i].Print();
    }
    cout << "---" << endl;
}