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
    	ll n,m;
    	scanf("%lld %lld",&n,&m);
    	vector<ll>v(n);
    	vector<ll>c(m);
    	rep(i,0,n)
    		scanf("%lld",&v[i]);
    	rep(i,0,m)
    		scanf("%lld",&c[i]);
    	sort(v.rbegin(),v.rend());
    	ll cost=0,idx=0;
    	for(auto i:v)
    	{
    		if(c[i-1]<=c[idx])
    			cost+=c[i-1];
    		else
    		{
    			cost+=c[idx];
    			idx++;
    		}
    	}
    	printf("%lld\n",cost);
    }
	return 0;
}
