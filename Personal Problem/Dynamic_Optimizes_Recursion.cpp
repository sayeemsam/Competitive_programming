#include<bits/stdc++.h>
using namespace std;
int m = 1000000007;

long long storage[10005];

int fib(int n)
{
    if(storage[n]!=0) return storage[n];
    storage[n]= (fib(n-1)%m)+(fib(n-2)%m);
    return storage[n]%m;
}
int main()
{
    storage[1]=1;
    storage[2]=1;
    cout << fib(8);
}
