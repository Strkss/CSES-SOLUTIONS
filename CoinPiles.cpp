#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main()
{
	ll n,x,y;
	cin>>n;
	while (n--)
	{
		cin>>x>>y;
		if ((x+y)%3==0&&max(x,y)<=2*min(x,y)){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
	}
	return 0;
}
