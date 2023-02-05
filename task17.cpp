#include <iostream>
using namespace std;
main()
{
    int size;
    cout<<"Enter size:";
    cin>>size;
    int number[size];
    int another;
    for (int i=0;i<size;i++)
    {
        cout<<"Enter any number:";
        cin>>number[i];
    }
    cout<<"Enter another number:";
    cin>>another;
    for (int i=0;i<size;i++)
    {
        cout<<"Scalar Product with another number is "<<another*number[i]<<endl;
    }

}