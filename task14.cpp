#include <iostream>
using namespace std;
main()
{
  string name;
  cout<<"Enter any word:";
  getline(cin,name);
  int length=name.length();
  string vowels={'a','i','e','o','u'};
  int count=0;
  for (int i=0;i<length;i++)
  {
    for (int j=0;vowels[j]!='\0';j++)
    {
       if (name[i]==vowels[j])
       {
        count++;
       }
    }
  }
  cout<<"Total vowels in name are "<<count;
  
}