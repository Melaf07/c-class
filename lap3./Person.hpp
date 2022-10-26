#ifndef Person_hpp
#define Person_hpp
#include <iostream>
#include <stdio.h>
using namespace std;

class person{
private:
    string fullname;
    string phonenum;
public:
    person(); //def constructor
    person(string name,string phone);
    ~person();
    void setname(string name);
    void setphone(string phone);
    string getname();
    string getphone();
    void printInfo();
  
};
#endif /* Person_hpp */
