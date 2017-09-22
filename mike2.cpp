#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
	ll n,x,i,j,k,a[1000001],b[1000001];
	sfd(n,x);
	f(i,0,n)
		sf(a[i]);
	sort(a+0,a+n);
	ll c=0;
	i=0;
	while((i<n)&&((a[i]+1)/2+c<=x))
	{
		c+=(a[i]+1)/2;
		i++;
	}
	ll suc=0,fail=n-i;
	i=0;
	while((i<n)&&((a[i])/2+c<=x))
	{
		c+=(a[i])/2;
		i++;
		suc++;
	}
	printf("%lld %lld\n",fail,suc);
	
return 0;
}
