#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number "<<endl;
    cin>>n;

    int a=0,b=1; 
    for (int i = 1; i <=n; i++)
    {
        int nextNumber=a+b;
        a=b;
        b=nextNumber;
        cout<<nextNumber<<" ";

    }
    
    return 0;
}