			/* Radheshyam Lodhi
			radheshyamlodhi64@gmail.com
			CSE-MNNIT Allahabad */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sfi(i) scanf("%d",&i)
#define sfid(a,b) scanf("%d%d",&a,&b)
#define sfl(i) scanf("%lld",&i)
#define sfld(a,b) scanf("%lld%lld",&a,&b)
#define pfl(a) printf("%lld\n",a)
#define pfi(a) printf("%d\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define pf printf
#define sf scanf
#define gc() getchar_unlocked()
#define mod 1000000007
ll fac[1000009];
ll po(ll b,ll e){
	ll an=1;
	while(e){
		if(e&1)
		an=(an*b)%mod;
		b=((b%mod) * (b%mod))%mod;
		e>>=1;
	}
	return an;
}
ll fact(ll x,ll u ,ll v,ll w){
	ll di = (fac[u]*fac[v])%mod;
	di=(di*fac[w])%mod;
	return (x/po(di,mod-2))%mod;
}
int main()
{
int t;
sfi(t);
int i;
fac[0]=1;
f(i,1,100008){
	fac[i]=(fac[i-1]*i)%mod;
}
while(t--){
	ll n,r,g,b,i,j,k;
	ll an=0;
	sfld(n,r);
	sfld(g,b);
	for(i=1;i<=r;i++)
	{if(i>n)
	break;
	for(j=1;j<=g;j++)
	{
	if(i+j>n)
	break;
	for(k=1;k<=b;k++){
	if(i+j+k>n)
	break;
	an+=fact(i+j+k,i,j,k);
	an%=mod;
	}
	
	}
	
	}
	pfl(an);
}
 
return 0;
}
