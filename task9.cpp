#include<iostream>
using namespace std;
int main()
{
    int age_in_years,age_in_days;
    cout<<"Enter your age in years:";
    cin>>age_in_years;
    age_in_days=age_in_years*365;
    cout<<endl<<"Your age in days: "<<age_in_days<<" days";
    return 0;

}