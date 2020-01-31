#include <iostream>

using namespace std;
int power_1(int a,int n)
{
    if(n==0)
        return 1;
    if(a==0)
        return 0;
    return a*power_1(a,n-1);
}
int power_2(int a,int n)
{
    if(n==0)
        return 1;
    if(a==0)
        return 0;
    if(n%2!=0)
    {
        n-=1;
        return a*power_2(a,n/2)*power_2(a,n/2);
    }
    else
        return power_2(a,n/2)*power_2(a,n/2);
}
int main()
{
    cout<<power_1(5,3)<<endl;
    cout<<power_2(5,3)<<endl;
    return 0;
}
