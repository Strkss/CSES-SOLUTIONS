#include <bits/stdc++.h>
using namespace std;
#define ll long long
vector<string> bitmask(ll n);
int main()
{
	ll n;
	cin>>n;
	vector<string> teamdiv;
	teamdiv=bitmask(n);
	vector<ll> diff;
	ll apple[20];
	for (ll i=0;i<n;i++)
	{
		cin>>apple[i];
	}
	ll a,b,abstract;
	for (ll i=0;i<pow(2,n)/2;i++)
	{
		a=0;b=0;
		for (ll j=0;j<n;j++)
		{
			if (teamdiv[i][j]=='0')
			{
				a+=apple[j];
			}
			if (teamdiv[i][j]=='1')
			{
				b+=apple[j];
			}
		}
		abstract=abs(a-b);
		diff.push_back(abstract);
	}
	sort(diff.begin(),diff.end());
	cout<<diff[0];
	return 0;
}
vector<string> bitmask(ll n)
{
	vector<string> ans;
	if (n==1)
	{
		ans.push_back("1");
		ans.push_back("0");
		return ans;
	}
	vector<string> prev = bitmask(n-1);
	for (ll i=0;i<(ll)prev.size();i++)
	{
		string s;
		s="1";
		s+=prev[i];
		ans.push_back(s);
	}
	for (ll i=prev.size()-1;i>=0;i--)
	{
		string s;
		s="0";
		s+=prev[i];
		ans.push_back(s);
	}
	return ans;
}