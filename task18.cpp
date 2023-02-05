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
    int largest=number[0];
    for (int idx=0;idx<size;idx++)
    {
        if (largest<number[idx])
        {
            largest=number[idx];
        }
    }
    cout<<"Largest value is:"<<largest;
}