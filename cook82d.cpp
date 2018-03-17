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
#define mod (long)(1e9+7)
 ll n,m,i,j,k,h[1000008]={0},an[1000007],po[1000007];
 
int main()
{
po[0]=1;
f(i,1,100001)po[i]=(po[i-1]*2)%mod;
 sfld(n,m);
 an[0]=0;
 ll ans=0;
 f(i,1,m+1){
 	ll x,y;
 	sfld(x,y);
 	h[x]=(h[x]+1)%2;
 	h[y]=(h[y]+1)%2;
 	if(h[x])
 		ans+=po[x];
 	else ans-=po[x];
	if(h[y])
 		ans+=po[y];
 	else ans-=po[y];
 	while(ans<0)ans+=mod;
 	ans%=mod;
 	an[i]=ans;

 }
sfl(k);
while(k--){
	ll x,y;
	sfld(x,y);
	if(an[y]==an[x-1])
	pf("Yes\n");
	else pf("No\n");
}
return 0;
}
