#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define mod 786433
int main()
{
	ll n,i,j,k,a[10000];
	sf(n);
	f(i,0,n+1)
	sf(a[i]);
	ll dp[10000];
	memset(dp,-1,sizeof dp);
	ll q,x;
	sf(q);
	while(q--)
	{
		sf(x);
		ll p=x,an=0;
		an+=a[0];
		f(i,1,n+1)
		{
			an=an+(a[i]*p%mod)%mod;
			an%=mod;
			p*=x;
			p%=mod;
		}
		pf(an%mod);
	}
	
return 0;
}
