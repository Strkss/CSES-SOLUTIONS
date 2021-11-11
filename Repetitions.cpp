#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    string a;
    cin>>a;
    char t='A';
    int streak=0;
    int ans=1;
    for (ll i =0;i<a.length();i++)
    {
        if (a[i]==t)
        {
            streak++;
            ans=max(streak,ans);
        }
        else
        {
            t=a[i];
            streak=1;
        }
    }
    cout<<ans;

    return 0;
}