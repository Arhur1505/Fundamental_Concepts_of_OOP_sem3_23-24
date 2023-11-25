#ifndef COURSE_H
#define COURSE_H

#include <string>

class Course {
    private:
    std::string name;
    float x;
    float y;

    public:
    Course();
    Course(std::string name);
    Course(std::string name, double x, double y);

    void SetName(std::string n);
    void SetX(double x);
    void SetY(double y);
    void Presentation();
    std::string GetName();
    Course* GetCourses(); 
    double GetX();         
    double GetY(); 
    ~Course();
};

#endif