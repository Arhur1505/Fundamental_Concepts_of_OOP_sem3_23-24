#include "Chest_3.h"


Chest_3::Chest_3(int a) : size(0), capacity(a){
    tab = new int[capacity];
}

Chest_3::~Chest_3() {
    delete[] tab; 
}

int Chest_3::Remove(){
    if(IsEmpty()){
        cout << "#BLAD: Obiekt pusty" << endl;
        return -1;
    }else{{
        for (int i = 0; i < size; i++){
            tab[i] = tab[i+1];
        }

        int deleted = tab[size - 1];
        size--;
        return deleted;
    }
    }
}

bool Chest_3::IsEmpty()const{
    return size == 0;
}

bool Chest_3::IsFull()const{
    return size == capacity;
}

void Chest_3::Add(int a){
    if(IsFull()){
        Resize();
    }
    tab[size] = a;
    size++;
}

void Chest_3::Clear(){
    size = 0; 
}

int Chest_3::Size()const{
    return size; 
}

void Chest_3::Print()const{
    cout << "#Zawartosc obiektu:" << endl;
    for (int i = 0; i < size; i++) {
        cout << tab[i] << ", ";
    }
    cout << endl;
}

void Chest_3::Resize() {
    capacity *= 2; 
    int* tab1 = new int[capacity]; 
    
    for (int i = 0; i < size; i++) {
        tab1[i] = tab[i];
    }

    delete[] tab; 
    tab = tab1; 
}