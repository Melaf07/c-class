#include "Date.hpp"
#include <iostream>
#include <stdio.h>
using namespace std;

date::date(){}
date::date( int d,int m, int y){
    setdate(d,m,y);
}
void date::setdate(int d,int m, int y){
    day= (d>0&&d<=31)?d:0;
    month=(m>0&&m<=12)?m:0;
    year=(y>2000&&y<2022)?y:0;
}
int date::getday(){
    return day;
}
int date::getmonth(){
    return month;
}
int date::getyear(){
    return year;
}


