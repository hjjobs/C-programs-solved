#include <bits/stdc++.h>
 
using namespace std;
 
#define max(a,b) ((a)>(b)?(a):(b))
#define min(a,b) ((a)<(b)?(a):(b))
#define abs(x) ((x)<0?-(x):(x))
#define pii pair<int,int>
#define m_p make_pair(n,m)
#define mod 1000000007
#define pb push_back
#define bp(x) __builtin_popcount(x)
typedef long long int ll;
int main()
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif	
	ios::sync_with_stdio(false);cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
		int n,i,a,b,c,temp=0;
		cin>>n;
		for(i=1;i<n;i++)
		{
			cin>>a>>b>>c;
			if(c>temp)
			{
				temp=c;
			}
		}
		cout<<temp<<"\n";
		for(i=0;i<n-1;i++)
		{
			cout<<0<<"\n";
		}
	}
	return 0;
} 