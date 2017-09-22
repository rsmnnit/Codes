#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
{
	ll n,q,i,j,k,mx,mn;
	sfd(n,q);
	mx=-10000000000;
	mn=10000000000;
	f(i,0,n)
	{
		sf(k);
		mx=max(mx,k);
		mn=min(mn,k);
	}
	while(q--)
	{
		sf(k);	
		if(k<=mx && k>=mn)
		printf("Yes\n");
		else
		printf("No\n");
	}
}
 
return 0;
}
