#ifndef MATRIX_H
#define MATRIX_H
#include<iostream>

using namespace std;
template<class T>
class Matrix
{
public:
    Matrix();
    Matrix<T>& operator+  ( Matrix<T>& );
    Matrix <T>&operator-  ( Matrix<T>& );
~Matrix();

    Matrix<T>& operator*  (Matrix<T>& );
    Matrix<T>& transpose(Matrix <T>&);
    template<class T2>
    friend istream& operator>> (istream& input, Matrix<T2>& mat);
    template<class T2>
    friend ostream& operator<< (ostream& output, Matrix<T2>& mat);

private:
    T** data;
    int row;
    int col;
};

template<class T>
Matrix<T>::Matrix()
{

}


template<class T2>
istream& operator>> (istream& input, Matrix<T2>& mat)
{

    cout<<"Enter no. rows and columns: ";
    input>>mat.row>>mat.col;
    mat.data = new T2* [mat.row];
    for (int i = 0; i < mat.row; i++)
        mat.data[i] = new T2 [mat.col];
    for(int i=0; i<mat.row; i++)
    {
        cout<<"Enter "<<i+1<<" row: ";
        for(int j=0; j<mat.col; j++)
        {
            input>>mat.data[i][j];
        }
    }
    return input;
}
template<class T2>
ostream& operator<< (ostream& output, Matrix<T2>& mat)
{
    for(int i=0; i<mat.row; i++)
    {
        for(int j=0; j<mat.col; j++)
        {
            output<<mat.data[i][j]<<"   ";
        }
        cout<<endl;
    }
    return output;
}
template<class T>
Matrix<T>& Matrix<T>::  operator+  ( Matrix<T>& mat)
{
    Matrix mat2;
    if (row==mat.row&&col==mat.col)
    {
        mat2.row=row;
        mat2.col=col;

        mat2.data = new T* [row];
        for (int i = 0; i < mat.row; i++)
            mat2.data[i] = new T [col];

        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                mat2.data[i][j]=data[i][j]+mat.data[i][j];
            }
        }
        return mat2;
    }
    else
        cout<<"operation failed! \n";

}
template<class T>
Matrix<T>& Matrix<T>::  operator-  ( Matrix<T>& mat)
{
    Matrix mat2;
    if (row==mat.row&&col==mat.col)
    {
        mat2.row=row;
        mat2.col=col;
        mat2.data = new T* [row];
        for (int i = 0; i < mat.row; i++)
            mat2.data[i] = new T [col];
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                mat2.data[i][j]=data[i][j]-mat.data[i][j]; // save the data of new Matrix
            }
        }
        return mat2;
    }
    else
        cout<<"operation failed! \n";
}
template<class T>

Matrix<T>& Matrix<T>::operator*  (Matrix<T>& mat2)
{
    Matrix mat;
    if (col==mat2.row)
    {
        mat.row=row;
        mat.col=col;
        mat.data = new T* [mat.row];
        for (int i = 0; i < row; i++)
            mat.data[i] = new T [mat.col];
        for (int i=0; i<mat.row; i++)
        {
            for (int j=0; j<mat.col; j++)
            {
                mat.data[i][j]=0;
            }
        }
        for (int co=0; co<mat.row; co++)
        {
            for (int co1=0; co1<mat.col; co1++)
            {
                for (int co2=0; co2<col; co2++)
                {
                    mat.data[co][co1]+=data[co][co2]*mat2.data[co2][co1];      //save the data of new matrix
                }
            }
        }
        return mat;
    }
    else
    {
        cout<<"Operation failed \n";
    }
}
template<class T>
Matrix<T>& Matrix<T>::transpose(Matrix<T>& mat)
{
    Matrix mat1;
    mat1.row=mat.col;
    mat1.col=mat.row;
    mat1.data = new T* [mat1.row];
    for (int i = 0; i < mat.row; i++)
        mat1.data[i] = new T [mat1.col];
    for (int i = 0; i < mat.col; i++ )
    {
        for (int j = 0; j < mat.row; j++)
        {
            mat1.data[i][j]=mat.data[j][i];
        }

    }
    return mat1;
}

template<class T>
Matrix<T>::~Matrix(){

     for (int i = 0; i < col; i++ )
    {
        delete data[i];
    }
    delete data;
}
#endif
