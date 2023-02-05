#include <iostream>
using namespace std;
main()
{
    float array1[2];
    int size;
    cout<<"Enter size of Second array:";
    cin>>size;
    float array2[size];
    for (int i=0;i<2;i++)
    {
        cout<<"Enter the element of first array:";
        cin>>array1[i];
    }
    for (int idx=0 ;idx<size;idx++)
    {
        cout<<"Enter the element of second array:";
        cin>>array2[idx];
    }
    for (int idx=0;idx<size;idx++)
    { 
        if (idx==0)
        {
            cout<<array1[0]<<",";
        }
        cout<<array2[idx]<<",";
        if (idx==size-1)
        {
            cout<<array1[1];
        }
    }
}