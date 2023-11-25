#include "Course.h"
#include <iostream>
#include <string>

using namespace std;

 Course::Course(){
    cout << "\nwywolanie konstruktora Course...\n";
}

 Course::Course(std::string n){
    cout << "\nwywolanie konstruktora Course...\n";
    name = n;
}

 Course::Course(std::string n, double x, double y){
    cout << "\nwywolanie konstruktora Course...\n";
    name = n;
    this->x = x;
    this->y = y;
}

Course::~Course() {
    std::cout << "Wywolanie destruktora Course...\n" << std::endl;
}

void Course::Presentation(){
    cout << "\n### Prezentacja kursu ###\n";
    cout << "Nazwa: " << name << endl;
    cout << "Liczba punktow wewnetrznych za kurs: " << x << endl;
    cout << "Liczba punktow ECTS za kurs: \n" << y << endl;
}

void Course::SetName(std::string name) {
    this->name = name;
}

void Course::SetX(double x) {
    this->x = x;
}

void Course::SetY(double y) {
    this->y = y;
}

string Course::GetName(){
    return name;
}

double Course::GetX(){
    return x;
}

double Course::GetY(){
    return y;
}
