#include<iostream>
using namespace std;
int main()
{
    int salary,W_H;
    cout<<"please enter your working hours in a day"<<endl;
    cin>>W_H;
    if(W_H<=10)
    cout<<endl<<"your daily salary is 20000/_";
    if(W_H>10&&W_H<=15)
    cout<<endl<<"your daily salary is "<<20000+((W_H-10)*500);
    if(W_H>15)
    {
      cout<<endl<<"your daily salary is "<<20000+(5*500)+(1000*(W_H-15));  /* code */
    }
    return 0;
}