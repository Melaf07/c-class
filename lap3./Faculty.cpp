#include "Faculty.hpp"
#include "Person.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;

faculty::faculty(string name,string phone,string fid,double s)
:person(name,phone){
    setid(fid);
    setsalary(s);
    cout<<"faculty vonstructor runs"<< endl;
}
void faculty::setid(string fid){
    facultyid=fid;
}
void faculty::setsalary(double s){
    salary=(s <0.0)?0.0:s;
}
string faculty::getid(){
    return facultyid;
}
double faculty::getsalary(){
    return salary;
}
void faculty::printInfo(){
cout<<"fullname: "<< getname()<< " phone number: "<<getphone()<<" faculty id:"<<getid()<<" salary: "<< getsalary()<<endl;
}
void faculty::comaper(faculty f){
    if (f.getsalary()>getsalary()) {
        cout<<"the biggest salary is: "<<f.getsalary()<<endl;}
        else if (getsalary()>f.getsalary()) {
            cout<<"the biggest salary is: "<<getsalary()<<endl;
    }
    
}
    
