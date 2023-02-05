#include <iostream>
using namespace std;
main()
{
    int size=0;
    cout<<"Enter size:";
    cin>>size;
    int number[size];
    for(int idx=0;idx<size;idx++)
    {
        cout<<"Enter any number:";
        cin>>number[idx];
    }
    for(int idx=size-1;idx>=0;idx--)
    {
         cout<<number[idx]<<" ";
    }
}