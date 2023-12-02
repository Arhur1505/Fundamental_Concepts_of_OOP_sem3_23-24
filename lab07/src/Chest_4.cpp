#include "Chest_4.h"

int Chest_4::Remove(){
    if(IsEmpty()){
        cout << "#BLAD: Obiekt pusty" << endl;
        return -1;
    }else{
        int deleted = tab.front();
        tab.erase(tab.begin());
        return deleted;
    }
}

bool Chest_4::IsEmpty()const{
    return tab.empty();
}

bool Chest_4::IsFull()const{
    return false;
}

void Chest_4::Add(int a){
    tab.push_back(a);
}

void Chest_4::Clear(){
    tab.clear();
}

int Chest_4::Size()const{
    return tab.size(); 
}

void Chest_4::Print()const{
    if(IsEmpty()){
        cout << "#BLAD: Obiekt pusty" << endl;
    } else {
        cout << "#Zawartosc obiektu:" << endl;
        for(int item : tab){
            cout << item << ", ";
        }
        cout << endl;
    }
}
