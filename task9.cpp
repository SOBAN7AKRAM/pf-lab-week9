#include <iostream>
using namespace std;
main ()
{
    string name;
    int count=0;
    cout<<"Enter word:";
    getline(cin,name);
    for (int i=0;name[i]!=0;i++)
    {
        count++;
    }
    if (count%2==0)
    {
        cout<<"true";
    }
    else
    cout<<"false";
}