#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <set>
#include <string.h>
#define ll long long

using namespace std;

void solve()
{
	ll n,k;
	scanf("%lld %lld",&n,&k);
	string s;
	cin>>s;
	if(n%2==0 && k==(n/2))
	{
		printf("NO\n");
		return;
	}
	string a=s.substr(0,k);
	reverse(s.begin(),s.end());
	string b=s.substr(0,k);
	if(a==b)
	{
		printf("YES\n");
		return;
	}
	printf("NO\n");
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



