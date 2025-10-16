#include<iostream>
#include<string>
using namespace std;
int main()
{
    string name;
    int wins,losses,draws,points;
    cout<<"Enter the name of cricket team: ";
    cin>>name;
    cout<<endl<<"Enter number of wins: ";
    cin>>wins;
    cout<<endl<<"Enter number of draws: ";
    cin>>draws;
    cout<<endl<<"Enter no of losses: ";
    cin>>losses;
    points=(wins*3)+(draws*1)+(losses*0);
    cout<<endl<<name<<" has obtained "<<points<<" points in the Asia cup tournament";
    return 0;

}