#include "Person.hpp"
#include "Faculty.hpp"
#include "Fstudent.hpp"
#include "Student.hpp"
#include <iostream>
using namespace std;
void comparebet2fun(faculty f1,faculty f2){
    if (f1.getsalary()>f2.getsalary()) {
        cout<<"the biggest salary is: "<<f1.getsalary()<<endl;}
        else if (f2.getsalary()>f1.getsalary()) {
            cout<<"the biggest salary is: "<<f2.getsalary()<<endl;
    }
}
int main(int argc, const char * argv[]) {
//    lap3

    date obj1(24,3,2002);
//    lap4
    fstudent obj("melaf","098765432","1234567",4.50,"876543",6000,obj1);
    obj.printInfo();
    cout<<"------------------------------------------------"<<endl;
    person* ptr=new person("melaf","098765432",obj1);
    ptr->printInfo();
    delete ptr;
     
    *ptr=faculty("melaf","098765432","876543",6000,obj1);
    ptr->printInfo();
    delete ptr;
     *ptr = student("melaf","098765432","1234567",4.50,obj1);
    ptr->printInfo();
    delete ptr;
    
    return 0;
}
