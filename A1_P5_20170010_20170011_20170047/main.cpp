#include <iostream>
#include <set>
using namespace std;

void RecPermute(string soFar, string rest,set <string>&sett)
{
    if (rest == "") // No more characters
         sett.insert(soFar) ; // Print the word
    else // Still more chars
// For each remaining char
        for (unsigned int i = 0; i < rest.length(); i++)
        {
            string next = soFar + rest[i]; // Glue next char
            string remaining = rest.substr(0, i)+ rest.substr(i+1);
            RecPermute(next, remaining,sett);
        }
}
// "wrapper" function
void ListPermutations(string s,set <string>&sett)
{
    RecPermute("",s, sett);
}
int main()
{
    set <string>sett;
    ListPermutations("Makka",sett);
    for(set<string>::iterator it=sett.begin();it!=sett.end();it++)
        cout<<(*it)<<endl;
    return 0;
}
