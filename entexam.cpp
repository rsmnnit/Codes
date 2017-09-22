#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
ll t;
sf(t);
while(t--){
	ll i,j,k,n,e,m,p;
	ll a[10005]={0};
	sfd(n,k);
	sfd(e,m);
	f(i,0,n-1)
	{
		f(j,0,e)
		{
			sf(p);
			a[i]+=p;
		}
	}
	ll su=0;
	f(j,0,e-1)
	{
		sf(p);
		su+=p;
	}
	sort(a,a+n-1);
	if(a[n-k-1]>=su)
	{
		if(a[n-k-1]-su+1<=m)
		pf(a[n-k-1]-su+1);
		else printf("Impossible\n");
	}
	else printf("0\n");
}
 
return 0;
}
