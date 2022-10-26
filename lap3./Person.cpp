#include "Person.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

person::person(){
    cout<<"constructor runs"<<endl;
} //def constructor
person::person(string name,string phone){
    setname(name);
    setphone(phone);
    cout<<"person (str,str) costructor runs"<<endl;
}
   person::~person(){
    cout<<"person destructor runs"<<endl;
}

void person::setname(string name){
    fullname = name;
}
void person::setphone(string phone){
    phonenum = phone;
}
string person::getname(){
    return fullname;
}
string person::getphone(){
    return phonenum;
}
void person::printInfo(){
    cout<<"fullname: "<< getname()<< " phone number: "<<getphone()<<endl;
}
    
