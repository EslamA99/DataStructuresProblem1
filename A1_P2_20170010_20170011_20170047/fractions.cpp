#include "fractions.h"
#include<iostream>
using namespace std;


istream& operator >> (istream& in, fractions&frac )//operator cin the number
{
    cout<<"Enter the fraction: ";
    in>>frac.numerator>>frac.a>>frac.denominator;
    while(frac.denominator==0)
    {
        cout<<"ur fraction is not valid: "<<endl;
        in>>frac.numerator>>frac.a>>frac.denominator;
    }
    return in;
}

ostream& operator<<(ostream &out, fractions&frac )//operator cout the number after plus or minus
{
    out <<frac.numerator<<'/'<<frac.denominator<<endl;
    return out;
}
fractions fractions::operator+(fractions frac2){
    fractions frac3;
    frac3.numerator=numerator*frac2.denominator+frac2.numerator*denominator;
    frac3.denominator=denominator*frac2.denominator;
    return frac3;
}
fractions fractions::operator-(fractions frac2){
    fractions frac3;
    frac3.numerator=numerator*frac2.denominator+(-1*frac2.numerator)*denominator;
    frac3.denominator=denominator*frac2.denominator;
    return frac3;
}
fractions fractions::operator*(fractions frac2){
    fractions frac3;
    frac3.numerator=numerator*frac2.numerator;
    frac3.denominator=denominator*frac2.denominator;
    return frac3;
}
fractions fractions::operator/(fractions frac2){
    fractions frac3;
    frac3.numerator=numerator*frac2.denominator;
    frac3.denominator=denominator*frac2.numerator;
    return frac3;
}
bool fractions::operator>(fractions frac2){
    double x1=numerator,y1=denominator,x2=frac2.numerator,y2=frac2.denominator;
    if(((x1/y1)-(x2/y2))>0)
        return true ;
    else
        return false;
}
bool fractions::operator<(fractions frac2){
    double x1=numerator,y1=denominator,x2=frac2.numerator,y2=frac2.denominator;
    if(((x1/y1)-(x2/y2))<0)
        return true ;
    else
        return false;
}
bool fractions::operator==(fractions frac2){
    double x1=numerator,y1=denominator,x2=frac2.numerator,y2=frac2.denominator;
    if(((x1/y1)-(x2/y2))==0)
        return true ;
    else
        return false;
}
bool fractions::operator>=(fractions frac2){
    double x1=numerator,y1=denominator,x2=frac2.numerator,y2=frac2.denominator;
    if(((x1/y1)-(x2/y2))>=0)
        return true ;
    else
        return false;
}
bool fractions::operator<=(fractions frac2){
    double x1=numerator,y1=denominator,x2=frac2.numerator,y2=frac2.denominator;
    if(((x1/y1)-(x2/y2))<=0)
        return true ;
    else
        return false;
}
void fractions::reduce(){
    int x;
    if(numerator>denominator)
        x=numerator;
    else
        x=denominator;
    while (true){
        if(numerator%x==0&&denominator%x==0)
            break;
        else
            x--;
    }
    numerator=numerator/x;
    denominator=denominator/x;
}
