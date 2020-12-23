#include<bits/stdc++.h>
#define ll long long
#define rep0(i,n) for(ll i=0;i<n;i++)
#define rep1(i,n) for(ll i=1;i<=n;i++)
using namespace std;

void solve()
{
    ll n,p[3];
    cin>>n>>p[0]>>p[1]>>p[2];
    sort(p,p+3);
    ll a=p[0],b=p[1],c=p[2];
    vector<ll>dp(n+1,-1);
    dp[0]=0;
    rep1(i,n)
    {
        if(i-a>=0 && dp[i-a]!=-1)
            dp[i]=max(dp[i],1+dp[i-a]);
        if(i-b>=0 && dp[i-b]!=-1)
            dp[i]=max(dp[i],1+dp[i-b]);
        if(i-c>=0 && dp[i-c]!=-1)
            dp[i]=max(dp[i],1+dp[i-c]);
    }
    cout<<dp[n];
}

int main(void)
{
    ll t=1;
    //cin>>t;
    while(t--)
    {
        solve();
    }
    return 0;
}
