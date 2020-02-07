#include<bits/stdc++.h>
using namespace std;

int T,n,i,j,x,y,summation = 0,ans=0;

int main()
{
    cin >> T >>n;
    long long int linear_array[n+1];
    long long int linear_sum_array[n+1];
    for(i=1;i<=n;i++)
    {
        cin >> linear_array[i];
        summation = summation + linear_array[i];
        linear_sum_array[i]=summation;
    }

    for(j=0;j<T;j++)
    {

    cin>> x >> y ;

    if(x==y)
    {
        ans = linear_array[x];
    }
    else if (x==1)
    {
        ans =  linear_sum_array[y]-linear_sum_array[x];
    }
    else
    {
     ans =  linear_sum_array[y]-linear_sum_array[x-1];
    }

    cout << ans;
    ans = 0;
    }

    return 0;
}
