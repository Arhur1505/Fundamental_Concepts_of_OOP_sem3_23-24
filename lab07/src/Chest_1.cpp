#include "Chest_1.h"

int Chest_1::Remove(){
    if(IsEmpty()){
        cout << "#BLAD: Obiekt pusty" << endl;
        return -1;
    }else{
        for (int i = 0; i < size; i++){
            tab[i] = tab[i+1];
        }

        int deleted = tab[size - 1];
        size--;
        return deleted;
    }
}

bool Chest_1::IsEmpty()const{
    return size == 0;
}

bool Chest_1::IsFull()const{
    return size == capacity;
}

void Chest_1::Add(int a){
    if(IsFull()){
        cout << "#BLAD: Obiekt zapelniony" << endl;
    }else{
        tab[size] = a;
        size++;
    }
}


void Chest_1::Clear(){
    size = 0; 
}

int Chest_1::Size()const{
    return size; 
}

void Chest_1::Print()const{
    cout << "#Zawartosc obiektu:" << endl;
    for(int i = 0; i < size; i++){
        cout << tab[i] << ", ";
    }
    cout << endl;
}