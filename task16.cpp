#include <iostream>
using namespace std;
main()
{
    int size=0;
    int another;
    cout<<"Enter size:";
    cin>>size;
    int number[size];
    for(int idx=0;idx<size;idx++)
    {
        cout<<"Enter any number:";
        cin>>number[idx];
    }
    cout<<"Enter another number:";
    cin>>another;
    for (int i=0;i<size;i++)
    {
        if (another==number[i])
        {
            cout<<"Already Entered";
        }
    }
}   