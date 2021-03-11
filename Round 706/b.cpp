#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string.h>
#include <cmath>
#define ll long long

using namespace std;

void solve()
{
	ll n,k,x;
	scanf("%lld %lld",&n,&k);
	set<ll>s;
	for(ll i=0;i<n;i++)
	{
		scanf("%lld",&x);
		s.insert(x);
	}
	ll me=0,max=(*s.rbegin());
	for(set<ll>::iterator i=s.begin();i!=s.end();i++)
	{
		if((ll)(*i)==(ll)me)
			me++;
		else
			break;
	}
	if(k<1)
	{
		printf("%lld\n",n);
		return;
	}
	ll p=ceil((double)(max+me)/2.000);
	s.insert(p);
	while(s.find(me)!=s.end())
	{
		me++;
	}
	max=(*s.rbegin());
	// cout<<me<<" "<<max<<endl;

	if(me>max)
	{
		printf("%lld\n",(ll)s.size()+(k-1));
		return;
	}
	printf("%lld\n",(ll)s.size());
	return;

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



