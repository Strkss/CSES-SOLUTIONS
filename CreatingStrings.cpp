#include <bits/stdc++.h>
using namespace std;
#define ll long long
ll fact(ll n);
int main()
{
	string n;
	cin>>n;
	ll a[26];
	ll b;
	ll sum=1;
	ll possibility;
	fill(a,a+26,0);
	for (int i=0;i<(int)n.length();i++)
	{
		a[n[i]-'a']++;
	}
	for (int i=0;i<26;i++)
	{
		if (a[i]>1)
		{
			b=a[i];
			sum=sum*fact(b);
		}
	}
	if (sum>=1)
	{
		possibility=fact(n.length())/sum;
		cout<<possibility<<"\n";
	}
	else if (sum<1)
	{
		possibility=fact(n.length());
		cout<<possibility<<"\n";
	}
	sort(n.begin(),n.end());
	cout<<n<<"\n";
	while (next_permutation(n.begin(),n.end()))
	{
		cout<<n<<"\n";
	}
}
ll fact(ll n)
{
	ll factor =1;
	for (ll i=2;i<=n;i++)
	{
		factor*=i;
	}
	return factor;
}