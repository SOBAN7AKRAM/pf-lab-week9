#include <iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter any name:";
    cin>>name;
    int i=name.length();
    for (int j=i;j>=0;j--)
    {
        cout<<name[j]<<" ";
    }
}