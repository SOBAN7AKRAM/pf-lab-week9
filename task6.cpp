#include <iostream>
using namespace std;
main()
{
    int size,sum=0;
    float average=0;
    int number[5]={1,2,3,4,5};
    for (int idx=0;idx<5;idx++)
    {
        sum=number[idx]+sum;
    }
    average=sum/5;
    cout<<"Sum is:"<<sum<<endl;
    cout<<"average is:"<<average<<endl;
}
