#include <iostream>
using namespace std;
main ()
{
    string name;
    cout<<"Write a word:";
    cin>>name;
    for (int i=0;name[i]!='\0';i++)
    {
        cout<<"The location of element "<<name[i]<<" is "<<i+1<<endl;
    }
}