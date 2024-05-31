#include<iostream>
using namespace std;
int main ()
{
    int a=30,b=10;

    //Arithmetic Operators
    cout<<"Arithmetic Operators"<<endl;

    cout<<"The value of a+b is :- "<<a+b<<endl;
    cout<<"The value of a-b is :- "<<a-b<<endl;
    cout<<"The value of a*b is :- "<<a*b<<endl;
    cout<<"The value of a/b is :- "<<a/b<<endl;
    cout<<"The value of a%b is :- "<<a%b<<endl;
    cout<<"The value of ++a is :- "<<++a<<endl;
    cout<<"The value of --a is :- "<<--a<<endl;

    cout<<endl;
    cout<<endl;

    //comparison operators/Relational Operators
    cout<<"Comparison Operators/Relational Operators"<<endl;

    bool first = (a>b);
    cout<<"The value of first is :- "<<first<<endl;
    bool second = (a<b);
    cout<<"The value of second is :- "<<second<<endl;
    bool third =(a==b);
    cout<<"The Value of third is "<<third<<endl;
    bool fourth =(a!=b);
    cout<<"The Value of fourth is "<<fourth<<endl;
    bool fifth =(a>=b);
    cout<<"The Value of fifth is "<<fifth<<endl;
    bool sixth =(a<=b);
    cout<<"The Value of sixth is "<<sixth<<endl;

    cout<<endl;
    cout<<endl;

    //Logical Operators
    cout<<"Logical Operators"<<endl;
    
   cout<<"The Value of Logical and Operators ((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
   cout<<"The Value of Logical or Operators ((a==b) || (a>b)) is "<<((a==b) || (a>b))<<endl;
   cout<<"The Value of Logical or Operators (!(a==b)) is "<<(!(a==b))<<endl;
}