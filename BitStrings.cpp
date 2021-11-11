#include <bits/stdc++.h>
using namespace std;
#define CONS 1000000007
#define ll long long

int main(int argc, char **argv)
{
	ll n,pos=2;
	cin>>n;
	if (n==1)
	{
		cout<<2;
		return 0;
	}
	for (ll i=2;i<=n;i++)
	{
		pos=pos*2%CONS;
	}
	cout<<pos<<"\n";
	
	return 0;
}
