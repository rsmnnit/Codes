#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
struct node{
	ll x,y,z;
};
ll l;
bool comp(const node &le,const node &ri)
{
	if(abs(ri.x-le.x)<l && abs(le.y-ri.y)<l)
	return true;
	return false;
}
int main()
{
	ll n,i,j,k,u,v,w,ans=0;
	node a[100003];
	sfd(n,l);
	f(i,0,n)
	{
		sfd(a[i].x,a[i].y);
		sf(a[i].z);
	}
	sort(a,a+n,comp);
	ll st=0,en=0,s=0,ind=INT_MAX;
	while(en<n &&st<n)
	{
		if(abs(a[en].x-a[st].x) <l && abs(a[en].y-a[st].y)<l)
		{s+=a[en].z;
		en++;}
		else {
		
		if(ans<=s)
		{
			ans=s;
			ind=min(ind,max(abs(a[en].x-a[st].x),abs(a[en].y-a[st].y)));
		}
		s-=a[st].z;
		st++;
		}
	}
	if(ans<=s)
		{
			ans=s;
			ind=min(ind,max(abs(a[en].x-a[st].x),abs(a[en].y-a[st].y)));
		}
	printf("%lld %lld\n",ans,ind);
return 0;
}
