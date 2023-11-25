#ifndef STUDENT_H
#define STUDENT_H

#include "Course.h"

class Student {
private:
    std::string name;
    int c = 0;
    Course* courses;

public:
    Student();
    Student(std::string name);
    Student(std::string name, int a, Course []);
    Student(std::string name, Course p1);
    Student(std::string name, Course p1, Course p2);
    Student(std::string name, Course p1, Course p2, Course p3);
    Student(std::string name, Course p1, Course p2, Course p3, Course p4);
    
    ~Student();

    void Presentation();
    void SetName(std::string name);
    void SetNewCourses(int x, const Course* name);
    void SetCourse(int index, std::string name, double x, double y);
    Course* GetCourses();
};

#endif