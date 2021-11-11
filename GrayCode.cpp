#include <bits/stdc++.h>
#define ll long long
using namespace std;

vector<string> answer(int n)
{
	vector<string> ans;
	if (n==1)
	{
		ans.push_back("0");
		ans.push_back("1");
		return ans;
	}
	vector<string> prev = answer(n-1);
	for (int i=0;i<(int)prev.size();i++)
	{
		string s;
		s="0";
		s+=prev[i];
		ans.push_back(s);
	}
	for (int i=(int)prev.size()-1;i>=0;i--)
	{
		string s;
		s="1";
		s+=prev[i];
		ans.push_back(s);
	}
	return ans;
}

int main()
{
	ll n;
	cin>>n;
	vector<string> res=answer(n);
	for (int i=0;i<pow(2,n);i++)
	{
		cout<<res[i];
		cout<<"\n";
	}
	
	return 0;
}