#include <bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
	string a;
	ll oddcount=-1;
	ll b[26];
	fill(b,b+26,0);
	cin>>a;
	for (int i=0;i<a.length();i++)
	{
		b[a[i]-'A']++;
	}
	for (int i=0;i<26;i++)
	{
		if (b[i]%2!=0)
		{
			if (oddcount==-1)
			{
				oddcount=i;
			}
			else
			{
				cout<<"NO SOLUTION";
				return 0;
			}
		}
	}
	string ans;
	for (ll i=0;i<26;i++)
	{
		for (ll j=0;j<b[i]/2;j++)
		{
			ans+=(char)(i+'A');
		}
	}
	cout<<ans;
	if (oddcount!=-1)
	{
		cout<<(char)(oddcount+'A');
	}
	reverse(ans.begin(),ans.end());
	cout<<ans;
	return 0;
}