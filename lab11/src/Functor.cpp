#include "Functor.h"

Functor::Functor(){}

Functor::Functor(int a, int b) : x(a), y(b){}

void Functor::wypiszStatystyki(){
    cout << "'a' mniejsze 'b': " << counter1 << endl;
    cout << "'a' rowne 'b': " << counter2 << endl;
    cout << "'a' wieksze 'b': " << counter3 << endl;
}

 int Functor::operator()(const int a, const int b){
    if(a < b){
        counter1++;
    } else if(a > b){
        counter3++;
    } else{
        counter2++;
    }
    return a < b;
}
