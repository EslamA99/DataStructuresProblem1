#include <iostream>
#include <cstring>
#include <vector>

using namespace std;

class StudentName
{
private:
    string name;
public:
    StudentName(string n)
    {
        name = n;
        string temp = "",temp1 = "";
        int countt=0;
        for(int i=0;i<name.length();i++){
            if(countt==0)
                temp+=name[i];
            if(countt==1)
            {
                temp1+=name[i];
            }
            if(name[i]==' ')
                countt++;

        }
        if(countt==0){
            name+=" "+temp+" "+temp;
        }
        if(countt==1)
            name+=" "+temp1;
    }
    void print()
    {
        string n = "";
        int c = 1;
        for(int i = 0; i < name.length(); i++)
        {
            n += name[i];
            if (name[i] == ' ' || i+1 == name.length())
            {
                cout << c << ")" <<n << endl;
                c++;
                n = "";
            }

        }


    }
    void Replace(int x, int y)
    {
        x-=1; y-=1;
        vector<string> v;
        string str = "";
        for (int i = 0; i < name.length(); i++)
        {
            str += name[i];
            if(name[i] == ' ' || i+1 == name.length())
            {
                v.push_back(str);
                str = "";
            }
        }
        name = "";
        if (x < 0 || x >= v.size() || y < 0 || y >= v.size())
        {
            cout << "false";
        }
        else
        {
            if (x+1 == v.size())
            {
                v[x] += ' ';
            }
            if (y+1 == v.size())
            {
                v[y] += ' ';
            }
            cout << "true" << ": ";
            swap(v[x],v[y]);
            for(int i = 0 ;i < v.size();i++)
                name +=  v[i];
        }
        cout << name << endl;

    }
};

int main()
{
    StudentName o("Ahmed osama mohammed");
    o.print();
    o.Replace(1,2);
    StudentName o1("Ahmed osama");
    o1.print();
    o1.Replace(1,2);
    StudentName o2("Ahmed");
    o2.print();
    o2.Replace(1,4);
    StudentName o3("Ahmed osama mohammed adelkhalk ahmed");
    o3.print();
    o3.Replace(1,5);



    return 0;
}
