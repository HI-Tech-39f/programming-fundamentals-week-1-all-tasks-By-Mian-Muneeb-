#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    float marks_in_M,marks_in_inter,marks_in_ecat,aggregate;
    cout<<"Enter your name"<<endl;
    cin>>name;
    cout<<"Enter your marks in matric out of 1100"<<endl;
    cin>>marks_in_M;
    cout<<"Enter your marks in inter out of 550"<<endl;
    cin>>marks_in_inter;
    cout<<"Enter your score in Ecat out of 400"<<endl;
    cin>>marks_in_ecat;
    aggregate=((marks_in_M/1100.0)*10)+((marks_in_inter/550.0)*40)+((marks_in_ecat/400.0)*50);
    cout<<"aggregate for "<<name<<" in UET is"<<aggregate;
    return 0;
}
