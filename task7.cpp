#include <iostream>
using namespace std;
main()
{
    string name;
    bool isFound=false;
    char character;
    cout<<"Enter name:";
    getline(cin,name);
    int idx=0;
    idx=name.length();
    cout<<"Enter caharacter:";
    cin>>character;
    for (int i=0;i<idx;i++)
    {
        if (name[i]==character)
       {
         isFound=true;
         break;
       }
    } 
    if (isFound==true)
    {
        cout<<"Found";
    }
    else
    cout<<"Not Found";
    
}    