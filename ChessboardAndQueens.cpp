#include <bits/stdc++.h>
using namespace std;
#define ll long long;
int main()
{
	string a[9];
	for (int i=1;i<9;i++)
	{
		cin>>a[i];
	}
	int b[9]={0,1,2,3,4,5,6,7,8};
	int count=0;
	bool ac=true;
	bool diagup[21];
	bool diagdown[21];
	fill(diagup,diagup+21,false);
	fill(diagdown,diagdown+21,false);
	do
	{
		for (int i=1;i<=8;i++)
		{
			if (a[i][b[i]-1]=='*')
			{
				ac=false;
				break;
			}
			else
			{
				if (diagup[b[i]+i]==false)
				{
					diagup[b[i]+i]=true;
				}	
				else
				{
					ac=false;
					break;
				}	
				if (diagdown[7+b[i]-i]==false)
					diagdown[7+b[i]-i]=true;
				else
				{
					ac=false;
					break;
				}		
			}
		}
		if (ac==true)
		{
			count++;
		}
		ac=true;
		fill(diagup,diagup+21,false);
		fill(diagdown,diagdown+21,false);
	}
	while (next_permutation(b+1,b+9));
	cout<<count;
	return 0;
}
