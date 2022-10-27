
#ifndef Fstudent_hpp
#define Fstudent_hpp
#include "Student.hpp"
#include "Faculty.hpp"
#include <iostream>
#include <stdio.h>
#include "Date.hpp"

using namespace std;
class fstudent:public student,public faculty{
public:
    fstudent(string name,string phone, string sid,double gp,string fid,double s,date &bd);
    void printInfo();
};
#endif /* Fstudent_hpp */
