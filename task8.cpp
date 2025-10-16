#include<iostream>
using namespace std;
int main()
{
    float power,current,volts;
    cout<<"enter amount of current in amperes"<<endl;
    cin>>current;
    cout<<"Enter total voltages in vots"<<endl;
    cin>>volts;
    power=current*volts;
    cout<<"The power is "<<power<<" watts";
    return 0;

}