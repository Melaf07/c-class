
#include "Student.hpp"
#include "Person.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

student::student(string name,string phone, string sid ,double gp):person(name,phone){
    setsid(sid);
    setgpa(gp);
}
void student::setsid(string sid){
    studentid=sid;
}
void student::setgpa(double gp){
    GPA = gp;
}
string student::getsid(){
    return studentid;
}
double student::getgpa(){
    return GPA;
}
void student::printInfo(){
    cout<<"fullname: "<< getname()<< " /phone number: "<<getphone()<<" /student id: "<<getsid()<<" / GPA: "<<getgpa()<<endl;
}

