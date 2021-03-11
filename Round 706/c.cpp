#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string.h>
#include <cmath>
#include <iomanip> 
#include <ios> 
#define ll long long

using namespace std;

void solve()
{
	ll n;
	scanf("%lld",&n);
	vector<ll>a;
	vector<ll>b;
	for(ll i=0;i<2*n;i++)
	{
		ll x,y;
		scanf("%lld %lld",&x,&y);
		if(x==0)
		{
			a.push_back(abs(y));
		}
		else
			b.push_back(abs(x));
	}
	// cout<<"hello"<<endl;
	sort(a.begin(),a.end());
	sort(b.begin(),b.end());
	long double ans=0;
	for(ll i=0;i<n;i++)
	{
		// cout<<"hello"<<endl;
		long double p=sqrt((a[i]*a[i])+(b[i]*b[i]));
		// cout<<p<<endl;
		ans+=p;
	}
	cout<<fixed<<setprecision(9)<<ans<<endl;
}



int main(void)
{
	#ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	#endif
	ll t;
	scanf("%lld",&t);
	while(t--)
	{
		solve();
	}
}



