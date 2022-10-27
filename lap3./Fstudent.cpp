
#include "Fstudent.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

fstudent::fstudent(string name,string phone, string sid,double gp,string fid,double s,date &bd)
:student(name, phone,sid, gp,bd),faculty(name,phone,fid, s,bd),person(name,phone,bd){
    cout<<"fstudent constructor run"<<endl;
}
void fstudent::printInfo(){
    student::printInfo();
    cout<<"/ the salary: "<<getsalary()<<"/the faculty id: "<<getid()<<endl;
}
