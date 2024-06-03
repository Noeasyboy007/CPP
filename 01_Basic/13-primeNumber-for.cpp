#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Enter a number"<<endl;
    cin>>n;

    // bool isprime =1;

    for (int i = 2; i <n; i++)
    {
        if(n%i==0)
        {
            cout<<"Not a prime number"<<endl;
            // isprime=0;
            break;
        }
    }
    
    return 0;
}