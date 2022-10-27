#include "Faculty.hpp"
#include "Person.hpp"
#include <iostream>
#include <stdio.h>

using namespace std;
faculty::faculty(){    
}

faculty::faculty(string name,string phone,string fid,double s,date &bd)
:person(name,phone,bd){
    setid(fid);
    setsalary(s);
    cout<<"faculty constructor runs"<< endl;
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
cout<<" faculty id:"<<getid()<<" salary: "<< getsalary()<<endl;
}
void faculty::comaper(faculty f){
    if (f.getsalary()>getsalary()) {
        cout<<"the biggest salary is: "<<f.getsalary()<<endl;}
        else if (getsalary()>f.getsalary()) {
            cout<<"the biggest salary is: "<<getsalary()<<endl;
    }
    
}
    
