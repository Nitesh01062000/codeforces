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

ll gcd(ll a, ll b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
     
}

vector<ll> decToBinary(ll n)
{
    vector<ll>b(32,0);
    ll i = 31;
    while (n > 0) {
        b[i] = n % 2;
        n = n / 2;
        i--;
    }
    return b;
}

vector<ll>xo(vector<ll>a,vector<ll>b)
{
	for(ll i=0;i<32;i++)
	{
		if(a[i]!=b[i])
			a[i]=1;
		else
			a[i]=0;
	}
	return a;
}

void solve()
{
	ll n,k;
	scanf("%lld %lld",&n,&k);
	vector<ll>v(n);
	for(ll i=0;i<n;i++) 
		scanf("%lld",&v[i]);
	ll idx=0;
	while(k && idx<n)
	{
		if(v[idx]==0)
			idx++;
		else
		{
			v[idx]--;
			v[n-1]++;
			k--;
		}
	}
	for(ll i=0;i<n;i++)
		printf("%lld ",v[i]);
	printf("\n");
	return;
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
		// printf("Case #%lld: %lld\n",i,solve());
		// cout<<"Case #"<<i<<": "<<solve()<<endl;
		solve();
	}
}



