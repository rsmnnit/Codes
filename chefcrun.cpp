#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
struct node{
int x,y;
}an[1000001];
ll min(ll a,ll b)
{
return a<b?a:b;
}
ll max(ll a,ll b)
{
return a>b?a:b;
}
int main()
{
ll t;
sf(t);
while(t--){
	ll n,i,j,k,a[1000001];
	
	ll st,en,mx1=0,mx2=0,mn1=0,mn2=0;
	sf(n);
	f(i,0,n)
	sf(a[i]);
	sfd(st,en);
	st--;
	en--;
	i= st;
	an[i].x=0;
	while(i!=en)
	{
		mx1+=a[i];
		i=(i+1)%n;
		mn1=min(mn1,mx1);
		an[i].x=mn1;
		
	}
	i=en;
	mn1=0;
	ll cs=0,mnf1=0,mxf1=mx1;
	an[i].y=0;
	mnf1=min(mnf1,an[i].y+an[i].x);
	while(i!=st)
	{
		i=(i-1+n)%n;
		cs+=a[i];
		
		mn1=min(mn1,cs);
		an[i].y=mn1;
		mnf1=min(mnf1,an[i].x+an[i].y);
	}
	
	i=st;
	an[i].x=0;
	while(i!=(en+n)%n)
	{
		
		i=(i-1+n)%n;
		mx2+=a[i];
		mn2=min(mn2,mx2);
		an[i].x=mn2;
	}
	i=en;
	mn2=0;cs=0;
	ll mnf2=0,mxf2=mx2;
	mx2=0;
	mnf2=min(mnf2,an[i].x);
	an[i].y=0;
	while(i!=st)
	{
		cs+=a[i];
		i=(i+1)%n;
		mn2=min(mn2,cs);
		an[i].y=mn2;
		mnf2=min(mnf2,an[i].x+an[i].y);
		
	}
	
	//printf("%lld %lld %lld %lld\n",mx1,mn1,mx2,mn2);
	ll ans=min(mxf1+2*mnf2,mxf2+2*mnf1);
	pf(ans);
}
 
return 0;
} 
