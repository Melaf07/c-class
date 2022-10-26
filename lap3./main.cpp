#include "Person.hpp"
#include "Faculty.hpp"
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
    faculty f1("melaf","098765432","1234567",5000.00);
    faculty f2("hadeel","098765432","1234567",6000.00);
    f1.printInfo();
    cout<<"________________"<<endl;
    f2.printInfo();
    cout<<"________________"<<endl;
    cout<<"ther result of compare method: "<<endl;
    f1.comaper(f2);
    cout<<"ther result of compare method: "<<endl;
    comparebet2fun(f1, f2);
    return 0;
}
