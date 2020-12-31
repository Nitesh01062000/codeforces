#include<bits/stdc++.h>
#define ll long long
#define rep0(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
#define in(n) scanf("%lld",&n)
#define out(n) printf("%lld\n",n)

using namespace std;

int main(void)
{
    ll t;
    scanf("%lld",&t);
    while(t--)
    {
        ll n;
        scanf("%lld",&n);
        vector<ll>v(n);
        rep0(i,n)
            scanf("%lld",&v[i]);
        set<ll>s;
        rep0(i,n)
        {
            for(ll j=i+1;j<n;j++)
                s.insert(v[j]-v[i]);
        }
        printf("%lld\n",(ll)s.size());
    }
}