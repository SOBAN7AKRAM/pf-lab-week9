#include <iostream>
using namespace std;
float resistanceCalculator(float resistance);
main ()
{
    int size;
    cout<<"Enter total number of resistance:";
    cin>>size;
    float resistance[size];
    float totalresistance;
    for (int idx=0;idx<size;idx++ )
    {
        cout<<"Enter the value of resistor"<<idx+1<<":";
        cin>>resistance[idx];
        totalresistance=totalresistance+resistance[idx];

    }
    cout<<totalresistance<<" Ohms"<<endl;
}
