#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,ans=0;
	cin>>n;
	for (ll i=1;i<=sqrt(n);i++)
	{
		ans=ans+n/(pow(5,i));
	}
	cout<<ans<<endl;
	return 0;
}
