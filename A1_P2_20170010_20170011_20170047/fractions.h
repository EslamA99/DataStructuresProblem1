#ifndef FRACTIONS_H
#define FRACTIONS_H
#include<cstring>
#include<iostream>
using namespace std;
class fractions
{
    public:
        fractions();
        friend ostream& operator<<(ostream &, fractions& );//operator cout
        friend istream& operator >> (istream& , fractions & );//operator cin
        fractions operator+ (fractions  );//prototype for operator +
        fractions operator- (fractions  );//prototype for operator -
        fractions operator* (fractions  );//prototype for operator *
        fractions operator/ (fractions  );//prototype for operator /
        bool operator> (fractions  );//prototype for operator >
        bool operator< (fractions  );//prototype for operator <
        bool operator== (fractions  );//prototype for operator /
        bool operator>= (fractions  );//prototype for operator >=
        bool operator<= (fractions  );//prototype for operator <=
        void reduce();
    private:
        int numerator;
        char a;
        int denominator;

};

#endif // FRACTIONS_H
