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
	ll x=2050000000000000000;
	ll ans=0;
	while(x>=2050)
	{
		if(x>n)
			x/=10;
		else
		{
			n-=x;
			ans++;
		}
	}
	if(n==0)
		printf("%lld\n",ans);
	else
		printf("-1\n");
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



