#include "Course.h"
#include "Student.h"
#include <iostream>

using namespace std;

Student::Student(){
    cout << "Wywolanie konstruktora Student...\n" << std::endl;
}

Student::Student(std::string name){
    cout << "Wywolanie konstruktora Student...\n" << std::endl;
    name = name;
}

Student::Student(std::string name, int a, Course []){
    this->name = name;

    this->courses = new Course[c];
    for (int i = 0; i < c; ++i) {
        this->courses[i] = courses[i];
    }
    std::cout << "Wywolanie konstruktora Student...\n" << std::endl;
}

Student::Student(std::string name, Course p1){
    cout << "Wywolanie konstruktora Student...\n" << std::endl;
    name = name;
    c = 1;
    courses = new Course[1];
    courses[0] = p1;
}

Student::Student(std::string name, Course p1, Course p2){
    cout << "Wywolanie konstruktora Student...\n" << std::endl;
    name = name;
    c = 2;
    courses = new Course[2];
    courses[0] = p1;
    courses[1] = p2;
}

Student::Student(std::string name, Course p1, Course p2, Course p3){
    cout << "Wywolanie konstruktora Student...\n" << std::endl;
    name = name;
    c = 3;
    courses = new Course[3];
    courses[0] = p1;
    courses[1] = p2;
    courses[2] = p3;
}
Student::Student(std::string name, Course p1, Course p2, Course p3, Course p4){
    cout << "Wywolanie konstruktora Student...\n" << std::endl;
    name = name;
    c = 4;
    courses = new Course[4];
    courses[0] = p1;
    courses[1] = p2;
    courses[2] = p3;
    courses[3] = p4;
}


Student::~Student(){
    cout << "Wywolanie dekonstruktora Student...\n" << std::endl;
    delete[] courses;
}

void Student::Presentation(){
    std::cout << "### Prezentacja studenta ###" << std::endl;
    std::cout << "Nazwa: " << name << std::endl;
    std::cout << "Liczba realizowanych kursow: " << c << std::endl;

    for (int i = 0; i < c; ++i) {
        std::cout << "Kurs - nazwa: " << courses[i].GetName()
                  << ", liczba punktow wewnetrznych za kurs = " << courses[i].GetX()
                  << ", liczba punktow ECTS za kurs = " << courses[i].GetY() << std::endl;
    }

    std::cout << std::endl;
}

void Student::SetName(std::string name){}
void Student::SetNewCourses(int x, const Course* name){}
void Student::SetCourse(int index, std::string name, double x, double y){}
Course* Student::GetCourses(){
    return courses;
}


    
