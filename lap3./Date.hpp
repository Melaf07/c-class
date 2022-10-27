#ifndef Date_hpp
#define Date_hpp
#include <iostream>
#include <stdio.h>
using namespace std;
class date{
private:
    int day;
    int month;
    int year;
public:
    date();
    date(int d,int m, int y);
    void setdate(int d,int m, int y);
    int getday();
    int getmonth();
    int getyear();
    
};
#endif /* Date_hpp */
