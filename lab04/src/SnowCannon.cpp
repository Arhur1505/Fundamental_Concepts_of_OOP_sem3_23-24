#include "SnowCannon.h"
#include <iostream>

using namespace std;

SnowCannon::SnowCannon(){}

void SnowCannon::SetID(int x){
    ID = x;
}
void SnowCannon::SetState(bool state){
    State = state;
}
void SnowCannon::SetCapacity(float capacity){
    Capacity = capacity;
}
void SnowCannon::SetConsumption(float consumption){
    Consumption = consumption;
}
void SnowCannon::SetWater(float water){
    Water = water;
}

int SnowCannon::GetID(){
    return ID;
}
bool SnowCannon::GetState(){
    return State;
}
float SnowCannon::GetCapacity(){
    return Capacity;
}
float SnowCannon::GetConsumption(){
    return Consumption;
}
float SnowCannon::GetWater(){
    return Water;
}

void SnowCannon::Make(float x){
    if(x <= 0){
        cout << "### Robienie sniegu ###" << endl;
        cout << "BLAD: Niepoprawna ilosc metrow szesciennych" << endl << endl;
        return;
    }
    if(State == false){
        cout << "### Robienie sniegu ###" << endl;
        cout << "BLAD: Wlacz armatke sniezna" << endl << endl;
    } else {
        cout << "### Robienie sniegu ###" << endl;
        cout << "Zrobiles " << x << " metrow szesciennych sniegu" << endl << endl;
        Water = Water - Consumption*x;
    }
}

void SnowCannon::Start(void){
    cout << "### Uruchomienie aramtki snieznej ###" << endl;
    if(Water<=0){
        cout << "BLAD: Brak wody, dolej do zbiornika armatki zasilajacego" << endl << endl;
    }
    else{
        SetState(true);
        cout << "Armatka sniezna zostala wlaczona" << endl << endl;
    }
}

void SnowCannon::Reload(float water){
    cout << "### Uzupelnianie zbiornika armatki snieznej woda ###" << endl;
    if(State == true){
        cout << "BLAD: Wylacz armatke sniezna przed uzupelnianiem wody" << endl << endl;
    }else if(water < 0){
        cout << "BLAD: Niepoprawna ilosc wody" << endl << endl;
    }else{
        if(water > Capacity - Water){
            cout << "Uzupelniles " << Capacity - Water << " metrow szesciennych wody" << endl << endl;
            Water = Capacity;
        } else {
            cout << "Uzupelniles " << water << " metrow szesciennych wody" << endl << endl;
            Water = Water + water;
        }
    }
}

void SnowCannon::Stop(void){
    cout << "### Zatrzymanie armatki snieznej ###" << endl;
    SetState(false);
    cout << "Armatka sniezna zostala wylaczona" << endl << endl;
}

void SnowCannon::Presentation(void){
    cout << "### Prezentacja ###" << endl;
    cout << "Identyfikator armatki snieznej: " << ID << endl;
    if(State == 1){
        cout << "Armatka sniezna jest wylaczona" << endl;
    } else {
        cout << "Armatka sniezna jest wlaczona" << endl;
    }
    cout << "Pojemnosc zbiornika armatki wynosi " <<  Capacity << " metrow szesciennych"<< endl;
    cout << "Srednia wydajnosc wynosi " << Consumption << " metrow szesciennych wody na 1 metr szescienny sniegu" << endl; 
    cout << "W zbiorniku armatki jest " << Water << " metrow szesciennych wody" << endl << endl;

}