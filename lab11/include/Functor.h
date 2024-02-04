#ifndef FUNCTOR_H
#define FUNCTOR_H

#include <iostream>
using namespace std;

class Functor{
    private:
        int x;
        int y;
        int counter1 = 0;
        int counter2 = 0;
        int counter3 = 0;
    
    public:
        Functor();
        Functor(int a, int b);
        void wypiszStatystyki();
        int operator()(const int a, const int b);
};

#endif