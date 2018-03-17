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
int main()
{
int t;
sfi(t);
while(t--){
 ll n;
 sfl(n);
 if(n==1)
 {
 	pf("0\n");
 	continue;
 }
 if(n==2)
  {
 	pf("1\n");
 	continue;
 }
 
 
 
 ll an=po(2,n-2);
if(n&1)
 an+=(po(2,n/2)+po(2,(n)/2-1))%mod-2;
 else  an+=(po(2,n/2)+po(2,(n)/2))%mod-2;
// an=(po(2,n)-an+mod)%mod;
 pfl(an);
 
}
 
return 0;
}
