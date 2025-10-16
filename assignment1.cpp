#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int rollnum;
    float aggregate;
    char section;
    cout<<"please enter your name , roll number, aggregate and section in given order"<<endl;
    cin>>name>>rollnum>>aggregate>>section;
    cout<<endl<<"your name ="<<name<<endl<<"roll number ="<<rollnum<<endl<<"your aggregate ="<<aggregate<<endl<<"your section"<<section<<endl;
    return 0;
}