
#ifndef Faculty_hpp
#define Faculty_hpp
#include "Date.hpp"
#include "Person.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

class faculty : public person{
private:
    string facultyid;
    double salary;
public:
    faculty(string name,string phone,string fid,double s);
    void setid(string fid);
    void setsalary(double s);
    string getid();
    double getsalary();
    void printInfo();
    void comaper(faculty f);
    };
#endif /* Faculty_hpp */
