#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,count=0,tempcount=0;
    cin>>n;
    ll a[n];
    if (n==1)
    {
        cout<<0;
        return 0;
    }
    for (ll i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for (ll i=0;i<n;i++)
    {
        if (i>0&&i<n-1)
        {
            if (a[i]<a[i-1])
            {
                count += a[i-1]-a[i];
                tempcount = a[i-1]-a[i];
                a[i]+=tempcount;
                tempcount=0;
            }
        }
        else if (i==n-1)
        {
            if (a[i]<a[i-1])
            {
                count += a[i-1]-a[i];
            }
        }
    }
    cout<<count;
    return 0;
}