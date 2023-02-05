#include <iostream>
using namespace std;
main()
{
    float due;
    cout<<"Enter the amount of due:";
    cin>>due;
    float change[4];
    float sum=0;
    for (int i=0;i<4;i++)
    {
        cout<<"Enter the change in your pocket:";
        cin>>change[i];
        sum=(change[0]*0.25+change[1]*0.10+change[2]*0.05+change[3]*0.01);
    }   
    if (due<=sum)
    {
        cout<<"true";
    }
    else 
    cout<<"false";

}