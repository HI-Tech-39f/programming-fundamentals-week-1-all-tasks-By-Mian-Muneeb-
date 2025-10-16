#include<iostream>
using namespace std;
int main()
{
    float megabytes,bits;
    cout<<"Enter the size of memory in megabytes (MB)"<<endl;
    cin>>megabytes;
    bits=megabytes*1024*1024*8;
    cout<<endl<<megabytes<<" MB is eqivalent to "<<bits<<" bits";
    return 0;
}