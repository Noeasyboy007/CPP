#include<iostream>
using namespace std;

int main()
{
    int a;
    cout<<"Enter the value of a"<<a<<endl;
    cin>>a;
    if(a>0)
    {
        cout<<"A is positive number"<<endl;
    }
    else if(a<0)
    {
        cout<<"A is negative number"<<endl;
    }
    else
    {
        cout<<"A is zero"<<endl;
    }
    return 0;
}