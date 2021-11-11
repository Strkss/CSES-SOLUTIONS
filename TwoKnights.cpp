#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	ll n,possiblemove,attackmove,totalmove,multiplier=3;
	cin>>n;
	for (ll i=1;i<=n;i++)
	{
		if (i==1)
		{
			cout<<0<<"\n";
		}
		else if (i==2)
		{
			cout<<6<<"\n";
		}
		else if (i==3)
		{
			cout<<28<<"\n";
		}
		else
		{
			totalmove=((i*i-1)*(i*i))/2;
			attackmove=8*multiplier;
			possiblemove=totalmove-attackmove;
			cout<<possiblemove<<"\n";
			multiplier=multiplier+(i-1);
		}
	}
	
	return 0;
}
