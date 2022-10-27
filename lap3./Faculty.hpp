
#ifndef Faculty_hpp
#define Faculty_hpp
#include "Date.hpp"
#include "Person.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

class faculty :virtual public person{
private:
    string facultyid;
    double salary;
public:
    faculty();
    faculty(string name,string phone,string fid,double s,date &bd);
    void setid(string fid);
    void setsalary(double s);
    string getid();
    double getsalary();
    void printInfo();
    void comaper(faculty f);
    };
#endif /* Faculty_hpp */
