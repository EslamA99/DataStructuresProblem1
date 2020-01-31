#include "MatrixCalculator.h"
#include<iostream>
#include "Matrix.h"

MatrixCalculator::MatrixCalculator()
{}
void MatrixCalculator::add()
{
    Matrix <double> mat1;
    Matrix <double> mat2;
    Matrix <double> mat3;
    int b=0;
    bool firsttime=false;
    while(true)
    {
        cout<<"0-if you want to enter two matrix\n1-if you want to use the result of previous calculation\n2-Exit\n";
        cin>>b;
        if(b==0)
        {
            cout<<"1- Perform Matrix Addition\n2- Perform Matrix Subtraction\n3- Perform Matrix Multiplication\n4- Matrix Transpose\n";
            int c=0;
            cin>>c;
            cout<<"Enter ur two matrices:\n";
            cin>>mat1>>mat2;
            if(c==1)
            {
                mat3=mat1+mat2;
                cout<<mat3<<endl;
            }
            if(c==2)
            {
                mat3=mat1-mat2;
                cout<<mat3<<endl;
            }
            if(c==3)
            {
                mat3=mat1*mat2;
                cout<<mat3<<endl;
            }
            if(c==4)
            {
                mat3.transpose(mat1);
                cout<<mat3;
            }
            firsttime=true;
        }
        if((b==1)&&(firsttime))
        {
            cout<<"1- Perform Matrix Addition\n2- Perform Matrix Subtraction\n3- Perform Matrix Multiplication\n4- Matrix Transpose\n";
            int c=0;
            cin>>c;
            cout<<"Enter ur matrix:\n";
            cin>>mat1;
            if(c==1)
            {
                mat3=mat1+mat3;
                cout<<mat3<<endl;
            }
            if(c==2)
            {
                mat3=mat3-mat1;
                cout<<mat3<<endl;
            }
            if(c==3)
            {
                mat3=mat3*mat1;
                cout<<mat3<<endl;
            }
            if(c==4)
            {
                mat3.transpose(mat3);
                cout<<mat3;
            }
        }
        if(b==2)break;
    }
}
