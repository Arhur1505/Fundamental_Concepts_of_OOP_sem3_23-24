#include "Chest_2.h"

int Chest_2::Remove(){
    if(IsEmpty()){
        cout << "#BLAD: Obiekt pusty" << endl;
        return -1;
    }else{
        int a = tab[size - 1];
        size--;
        return a;
    }
}

bool Chest_2::IsEmpty()const{
    return size == 0;
}

bool Chest_2::IsFull()const{
    return size == capacity;
}

void Chest_2::Add(int a){
    if(IsFull()){
        cout << "#BLAD: Obiekt zapelniony" << endl;
    } else {
        tab[size] = a;
        size++;
    }
}


void Chest_2::Clear(){
    size = 0; 
}

int Chest_2::Size()const{
    return size; 
}

void Chest_2::Print()const{
    cout << "#Zawartosc obiektu:" << endl;
    for(int i = 0; i < size; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
}