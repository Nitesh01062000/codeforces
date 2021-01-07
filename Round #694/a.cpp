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
    	ll mi,ma=0,s=0;
    	rep(i,0,n)
    	{
    		scanf("%lld",&y);
    		s+=y;
    		ma+=(ll)(ceil((double)((double)y/(double)x)));
    	}
    	mi=(ll)(ceil((double)s/(double)x));
    	printf("%lld %lld\n",mi,ma);
    }
	return 0;
}
