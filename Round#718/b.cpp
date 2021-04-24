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
	ll n,m;
	scanf("%lld %lld",&n,&m);
	vector<vector<ll> >v(n,vector<ll>(m));
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
		{
			scanf("%lld",&v[i][j]);
		}
	}
	for(ll i=0;i<n;i++)
		sort(v[i].begin(),v[i].end());
	// for(ll i=0;i<n;i++)
	// {
	// 	for(ll j=0;j<m;j++)
	// 		printf("%lld ",v[i][j]);
	// 	printf("\n");
	// }
	for(ll i=0;i<m;i++)
	{
		ll mi=LLONG_MAX;
		for(ll j=0;j<n;j++)
			mi=min(mi,v[j][i]);
		bool found=false;
		// cout<<"min "<<mi<<endl;
		for(ll j=0;j<n;j++)
		{
			if(!found && v[j][i]==mi)
			{
				found=true;
			}
			else
			{
				ll tmp=v[j].back();
				v[j].pop_back();
				v[j].insert(v[j].begin()+i,tmp);
			}
		}
	}
	for(ll i=0;i<n;i++)
	{
		for(ll j=0;j<m;j++)
			printf("%lld ",v[i][j]);
		printf("\n");
	}

}




int main(void)
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ll t=1;
	scanf("%lld",&t);
	for(ll i=1;i<=t;i++)
	{
		solve();
	}
}



