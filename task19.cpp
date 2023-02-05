#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter the size:";
    cin>>size;
    int number[size];
    for (int idx=0;idx<size;idx++)
    {
        cout<<"Enter any number:";
        cin>>number[idx];
        
    }
    int smallest=number[0];
    for (int idx=0;idx<size;idx++)
    {
        if (smallest>number[idx])
        {
            smallest=number[idx];
        }
    }
    cout<<"Smallest value is:"<<smallest;
}