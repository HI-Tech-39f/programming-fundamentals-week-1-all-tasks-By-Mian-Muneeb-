#include<iostream>
using namespace std;
int main()
{
    float current,charge,time;
    cout<<"enter the value of charge"<<endl;
    cin>>charge;
    cout<<endl<<"enter the time taken by charge"<<endl;
    cin>>time;
    current=charge*time;
    cout<<endl<<"induced current is"<<current<<"A";
    return 0;
}