
#ifndef Student_hpp
#define Student_hpp
#include "Person.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;
class student:public person{
private:
    string studentid;
    double GPA;
public:
    student(string name,string phone, string sid ,double gp);
    void printInfo();
    void setsid(string sid);
    void setgpa(double gp);
    string getsid();
    double getgpa();
};
#endif /* Student_hpp */
