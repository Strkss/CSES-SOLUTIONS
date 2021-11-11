#include <bits/stdc++.h>
using namespace std;
#define ll long long
void TowerOfHanoi(ll n, ll from, ll aux, ll to);
int main()
{
	ll n;
	cin>>n;
	cout<<pow(2,n)-1<<"\n";
	TowerOfHanoi(n,1,2,3);
	return 0;
}

void TowerOfHanoi(ll n, ll from, ll aux, ll to)
{
	if (n==1)
	{
		cout<<from<<" "<<to<<"\n";
	}
	else
	{
		TowerOfHanoi(n-1, from, to, aux);
		TowerOfHanoi(1, from, aux, to);
		TowerOfHanoi(n-1, aux, from, to);
	}
}