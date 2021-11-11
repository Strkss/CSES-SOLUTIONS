#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n,sum,sum2=0;
    cin>>n;
    ll a[n];
    sum=n*(n+1)/2;
    for (ll i=0;i<n-1;i++)
    {
        cin>>a[i];
        sum2=sum2+a[i];
    }
    cout<<sum-sum2;

    return 0;
}