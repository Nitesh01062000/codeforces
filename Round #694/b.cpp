#include<bits/stdc++.h>
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)

using namespace std;

int main(void)
{
	#ifndef ONLINE_JUDGE
	    freopen("input.txt", "r", stdin);
    	freopen("output.txt", "w", stdout);
	#endif
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
    	ll n,x,y;
    	scanf("%lld %lld",&n,&x);
    	vector<pair<ll,ll>>v(n);
    	rep(i,0,n)
    	{
    		scanf("%lld",&y);
    		v[i].first=y;
    		v[i].second=1;
    	}
    	ll ans=0,i=0;
    	while(i<v.size())
    	{
    		if(((v[i].first)%x)!=0)
    			break;
    		ans+=(v[i].second*v[i].first);
    		v.push_back(make_pair(v[i].first/x,v[i].second*x));
    		i++;
    	}
    	for(;i<v.size();i++)
    		ans+=(v[i].second*v[i].first);
    	printf("%lld\n",ans);
    }
	return 0;
}
