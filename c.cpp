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
        string s;
        cin>>s;
        vector<bool>v(s.size(),false);
        ll ans=0;
        for(ll i=1;i<s.size();i++)
        {
            if((i>1 && s[i]==s[i-2] && !v[i-2]) || (s[i]==s[i-1] && !v[i-1]))
            {
                ans++;
                v[i]=true;
            }
        }
        printf("%lld\n",ans);
    }
    return 0;
}