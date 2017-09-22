#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
	ll n,i,j,k,a[100002];
	ll x,y,s=0;
	sf(n);
	f(i,0,n)
	sf(a[i]);
	f(i,0,n)
	{
		ll mx=a[i];
		f(j,i+1,n)
		{
			mx=max(mx,a[j]);
			if((a[i]&a[j])==a[i] ||(a[i]&a[j])==a[j])
			s+=mx;
		}
	}
	pf(s);
return 0;
}
