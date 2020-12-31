#include<bits/stdc++.h>
#define ll long long
#define rep0(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)

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
        ll mi=v[0],ans=1;
        for(ll i=1;i<n;i++)
        {
            if(v[i]<mi)
                continue;
            else if(mi==v[i])
            {
                mi++;
                ans++;
            }
            else
            {
                mi=v[i];
                ans++;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}