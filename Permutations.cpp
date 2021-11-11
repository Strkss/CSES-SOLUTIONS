#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    ll n;
    cin>>n;
    if (n<=3&&n>1)
    {
        cout<<"NO SOLUTION";
    }
    else if (n==4)
    {
        cout<<"2 4 1 3";
    }
    else if (n==1)
    {
        cout<<"1";
    }
    else
    {
        for (ll i=1;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
        for (ll i=2;i<=n;i+=2)
        {
            cout<<i<<" ";
        }
    }

    return 0;
}