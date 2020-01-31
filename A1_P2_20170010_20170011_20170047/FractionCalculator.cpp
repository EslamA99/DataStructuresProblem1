#include "FractionCalculator.h"
#include "fractions.h"
#include<cstring>
#include<iostream>
#include <stdlib.h>
using namespace std;
FractionCalculator::FractionCalculator()
{
    //ctor
}
fractions::fractions()
{
    numerator=0;
    denominator=1;
    a='/';
}
void FractionCalculator:: all()
{
    int choice=0;
    fractions  f1,f2,f3;
    cin>>f1;
    cin>>f2;
    int countt=0;
    while(true)
    {
        cout<<"1- (+) \n2 -(-)\n3- (*)\n4- (/)\n5- compare\n6- Exit\nEnter ur choice: ";
        cin>>choice;
        if(choice==1)
            f3=f1+f2;
        if(choice==2)
            f3=f1-f2;
        if(choice==3)
            f3=f1*f2;
        if(choice==4)
            f3=f1/f2;
        if(choice==5)
        {
            if(f1>f2)
                {cout<<"f1>f2"<<endl;cout<<"f1 >= f2"<<endl;}
            else if(f2>f1)
                {cout<<"f1<f2"<<endl;cout<<"f1 <= f2"<<endl;}
            else if(f1==f2)
                cout<<"f1 = f2"<<endl;
            countt++;
        }
        if(choice>=1&&choice<5)
        {
            f3.reduce();
            cout<<f3<<endl;
        }
        if(choice==6)
            exit(0);
        cout<<"Do u want to continue with new frac or not\nTo continue press 1\nnew data press 2\n";
        int choice2;
        cin>>choice2;
        if(choice2==1)
        {
        cout<<"please enter the second fraction: ";
            if(countt!=1)
                f1=f3;
            cin>>f2;
        }
        else
            cin>>f1>>f2;

    }
}
