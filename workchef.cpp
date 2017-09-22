#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
struct ar{
ll x;
}a[1000007];
int main()
{
ll i,j,k,di;
memset(a,0,sizeof a);
for(i=1;i<=1000000;i++)
{	ll h[10]={0};
	ll tmp=i,d,di=0,f=0;
	while(tmp)
	{
		d=tmp%10;
		tmp/=10;
		if(d && !h[d])
		{
			if(i%d==0)
			di++;
			h[d]=1;
		}
	}
	a[i].x=di;
}
ll t;
sf(t);
while(t--){
ll l,r,k;
sfd(l,r);sf(k);
ll an=0;
for(i=l;i<=r;i++)
{
	if(a[i].x>=k)
	an++;
}
pf(an);
}
 
return 0;
}
