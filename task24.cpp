#include <iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter any word:";
    getline(cin,name);
    string vowels={'a','A','e','E','i','I','o','O','u','U'};
    string count;
    for (int i=0;name[i]!='\0';i++)
    {
        for (int j=0;vowels[j]!=0;j++)
        {
            if (name[i]==vowels[j])
            {
                count[i]=name[i];
            }
        }
    }
    for (int i=0;name[i]!='\0';i++)
    {
        if (count[i]==name[i])
        {
            continue;
        }
        cout<<name[i];
    }
    
    
    
}