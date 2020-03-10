#include<bits/stdc++.h>
using namespace std;

int a;

int LeapYear(int a)
{
    if(a%400==0)
    {
        cout << "Leap Year";
    }
    else if(a%100==0)
    {
        cout << "Not Leap Year";
    }
    else if(a%4==0)
    {
        cout << "Not Leap Year";
    }
    else
    {
        cout << "Not Leap Year";
    }


}


int main()
{
    cin >> a;

    LeapYear(a);

    return 0;
}
