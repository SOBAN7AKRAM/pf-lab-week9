#include <iostream>
using namespace std;
main()
{
    string name;
    char chracter;
    cout<<"Enter name:";
    cin>>name;
    int i=name.length();
    cout<<"Enter character:";
    cin>>chracter;
    if (name[i-1]==chracter)
    {
        cout<<"true";
    }
    else
    cout<<"false";
}