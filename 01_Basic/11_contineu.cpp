#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter anumber"<<endl;
    cin>>n;
    for (int i = 0; i <=n; i++)
    {
        if (i==5)
        {
            continue;
        }
        cout<<i<<endl; 
    }
    
    return 0;
}