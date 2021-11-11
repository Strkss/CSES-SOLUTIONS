#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll t,x,y;
	ll maxspi,xmax,ymax;
	cin>>t;
	for (ll i=1;i<=t;i++)
	{
		cin>>y>>x;
		if (x==1 && y==1)
		{
			cout<<1<<"\n";
		}
		else
		{
			maxspi=max(x,y);
		if (maxspi%2==0)
		{
			ymax=maxspi;
			xmax=1;
		}
		else
		{
			xmax=maxspi;
			ymax=1;
		}
		if (x==xmax && y==ymax)
		{
			cout<<maxspi*maxspi<<"\n";
		} 
		else
		{
			cout<<maxspi*maxspi-abs(xmax-x)-abs(ymax-y)<<"\n";
		}
		}
	}
	
	return 0;
}