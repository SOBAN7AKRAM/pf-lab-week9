#include <iostream>
using namespace std;
main()
{
    string name;
    cout<<"Enter any word:";
    getline(cin,name);
    int length=name.length();
    string count;
    string alphabets={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
    for (int j=0;alphabets[j]!='\0';j++)
    {
       for (int i=0;i<length;i++)
       {
        if (name[i]==alphabets[j])
        {
            count[i]=alphabets[j+1];
            if (name[i]=='z')
            {
                count[i]='a';
            }
            break;
        }
        
       }
    }
    for (int i=0;i<length;i++)
    {
        cout<<count[i];
    }
   
}