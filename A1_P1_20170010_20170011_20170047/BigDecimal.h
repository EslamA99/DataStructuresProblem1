#ifndef BIGDECIMAL_H
#define BIGDECIMAL_H
#include<cstring>
#include<iostream>
using namespace std;

class BigDecimal
{
    public:
        BigDecimal();//default constructor
        BigDecimal(string);
        BigDecimal(int);
        BigDecimal operator+ (BigDecimal  );//prototype for operator +
        BigDecimal operator- (BigDecimal  );//prototype for operator -
        friend ostream& operator<<(ostream &, BigDecimal& );//operator cout
        friend istream& operator >> (istream& , BigDecimal & big);//operator cin
        friend bool check_negative_for_plus(BigDecimal &,BigDecimal &);//function to check if number is negative for plus
        friend bool check_negative_for_minus(BigDecimal &,BigDecimal &);//function to check if number is negative for minus
        friend void  string_absolute(string &);//to make the number positive
    private:
    string num;
    int int_num;
};

#endif // BIGDECIMAL_H
