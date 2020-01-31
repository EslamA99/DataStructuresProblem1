#include <iostream>
#include "BigDecimal.h"
using namespace std;

int main()
{
    cout <<"enter ur choice\n(+) 1  (-) 2: ";
    int choice=0;
    cin>>choice;
    if (choice==1)
    {
        BigDecimal n1,n2,num3;
        cout<<"enter num1:   ";
        cin>>n1;//to take the number
        cout<<"enter num2:   ";
        cin>>n2;
        BigDecimal num1(n1),num2(n2);
        cout<<"num1 + num2:  ";
        if(check_negative_for_plus(num1,num2))//check if number is negative

            num3=num1+num2;
        else
            num3=num1-num2;
        cout<<num3;//print sum
        cout<<endl;
    }
    if (choice==2)
    {
        BigDecimal n1,n2,num3;
        cout<<"enter num1:   ";
        cin>>n1;
        cout<<"enter num2:   ";
        cin>>n2;
        BigDecimal num1(n1),num2(n2);
        cout<<"num1 - num2:  ";
        if(check_negative_for_minus(num1,num2))//check if number is negative
            num3=num1+num2;
        else
            num3=num1-num2;
        cout<<num3;
    }
    return 0;
}
