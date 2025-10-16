#include<iostream>
using namespace std;
int main()
{
    long long C_population,A_population,birth_rate;
    cout<<"Enter current world's population: ";
    cin>>C_population;
    cout<<endl<<"Enter no of births per month: ";
    cin>>birth_rate;
    A_population=C_population+(birth_rate*12*30);
    cout<<endl<<"The population in three decades will be: "<<A_population;
    return 0;
}