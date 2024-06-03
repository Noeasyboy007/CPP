#include <iostream>

using namespace std;

int main()
{
    int age;
    cout << "Enter your age" << endl;
    cin >> age;
    switch (age)
    {
    case 18:
        cout << "You are eligible for vote" << endl;
        break;
    case 15:
        cout << "You are not eligible for vote" << endl;
        break;

    default:
        cout << "You enter Worng Value" << endl;
        break;
    }
}
