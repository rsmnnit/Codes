#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
	ll n,a[1009],i,j,k,x,c=0;
	sfd(n,k);
	f(i,0,n)
	sf(a[i]);
	ll po=pow(2,n);
	for(i=0;i<po;i++)
	{ll xo=0;
		for(j=0;j<n;j++)
		{
			if(i&(1<<j)){
			xo=xo^a[j];
			}
		}
		if(xo==k)
		c++;
	}
	pf(c);
return 0;
}
