#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter the value of n"<<endl;
    cin>>n;

    int i=2;
    while(i<n)
    {
        if(n%i==0)
        {
            cout<<"Not Prime Number for "<<i<<endl;
        }
        else
        {
            cout<<"Prime Number for "<<i<<endl;
        }
        i++;
    }
    return 0;
}