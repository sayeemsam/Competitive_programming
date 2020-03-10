#include<bits/stdc++.h>
using namespace std;

int a,b,i,j;

vector<int>data;

int main()
{
    cin >> a >> b;
    for(i=0; a!=b; i++)
    {
        if((a+1)*5<=b)
        {
            a = a+1;
            data.push_back(a);
        }
        else if(a*5<=b)
        {
            a = a*5;
            data.push_back(a);
        }
        else if(a+1<=b)
        {
            a = a+1;
            data.push_back(a);
        }
    }

    cout << data.size()<< endl;

    for(j=0; j<data.size(); j++)
    {
        cout << data[j] << " ";
    }

    return 0;
}
