#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <unordered_map>
#include <set>
#include <string.h>
#include <cmath>
#include <iomanip> 
#include <ios> 
#include <sstream>
#include <stack>
#include <numeric>
#include <limits.h>
#define ll long long
// #define mod 1000000007

using namespace std;

void solve()
{
	ll n;
	scanf("%lld",&n);
	vector<vector<ll> >v(n,vector<ll>(n,-1));
	for(ll i=0;i<n;i++)
		scanf("%lld",&v[i][i]);
	for(ll i=0;i<n;i++)
	{
		ll tmp=(v[i][i]-1);
		ll f=i,s=i;
		while(tmp--)
		{
			// if(s<f && v[f][s+1]==-1)
			// {
			// 	s++;
			// 	v[f][s]=(v[i][i]);
			// }
			if(f>s && v[f-1][s]==-1)
			{
				f--;
				v[f][s]=(v[i][i]);
			}
			else if(s>0 && v[f][s-1]==-1)
			{
				s--;
				v[f][s]=(v[i][i]);
			}
			else if(f<(n-1) && v[f+1][s]==-1)
			{
				f++;
				v[f][s]=(v[i][i]);
			}
			else
			{
				cout<<i<<" "<<f<<" "<<s<<" "<<endl;
				printf("-1\n");
				return;
			}
		}
	}
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<=i;j++)
			printf("%lld ",v[i][j]);
		printf("\n");
	}
	return;

}




int main(void)
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ll t=1;
	// scanf("%lld",&t);
	for(ll i=1;i<=t;i++)
	{
		solve();
	}
}



