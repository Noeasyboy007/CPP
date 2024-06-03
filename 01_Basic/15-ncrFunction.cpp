#include<iostream>
using namespace std;

int power(int num1, int num2)
{
     int ans=1;
    for (int i = 1; i <= num2; i++)
    {
        ans=ans*num1;
    }
    return ans;
}

int main()
{
    cout<<"Enter num and power"<<endl;
    int a,b;
    cin>>a>>b;
    int ans=power(a,b);
    cout<<"Your ans is:- "<<ans<<endl;

    cout<<"Enter num and power"<<endl;
    int c,d;
    cin>>c>>d;
    ans=power(c,d);
    cout<<"Your ans is:- "<<ans<<endl;

    cout<<"Enter num and power"<<endl;
    int e,f;
    cin>>e>>f;
    ans=power(e,f);
    cout<<"your ans is:- "<<ans<<endl;


}