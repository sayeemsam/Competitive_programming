#include<bits/stdc++.h>
using namespace std;

int storage[10005][10005];

int cord(int n,int m)
{
    int N,M;

    if(n<0||n>N||m<0||m>M) return 0;
    if(storage[n][m]!=0) return storage[n][m];
    storage[n][m]= cord(n-1,m)+ cord(n,m-1);
    return storage[n][m];
}
int main()
{
    storage[0][0]=1;
    cout << cord(2,2);
}
