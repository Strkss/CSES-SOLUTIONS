#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,sum;
	cin>>n;
	bool b[n];
	ll a[n];
	if ((n*(n+1)/2)%2==0)
	{
		cout<<"YES"<<"\n";
		sum=n*(n+1)/2/2;
		for (ll i=0;i<n;i++)
		{
			a[i]=i+1;
			b[i]=false;
		}
		for (ll i=n-1;i>=0;i--)
		{
			if (sum-a[i]>=0)
			{
				sum=sum-a[i];
				b[i]=true;
			}
			if (sum==0)
			{
				break;
			}
		}
		cout<<count(b,b+n,true)<<"\n";
		for (ll i=0;i<n;i++)
		{
			if (b[i]==true)
			{
				cout<<a[i]<<" ";
			}
		}
		cout<<"\n";
		cout<<count(b,b+n,false)<<"\n";
		for (ll i=0;i<n;i++)
		{
			if (b[i]==false)
			{
				cout<<a[i]<<" ";
			}
		}
	}
	else
	{
		cout<<"NO";
	}
}
