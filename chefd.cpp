#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
	ll m,n,q,l,r,a[100002],i,j,k;
	set<ll>st[6];
	set<ll>::iterator it,lo,up;
	sf(n);
	f(i,0,n){
		sf(k);
		a[i]=k;
		if(k%2==0)st[2].insert(i);
		if(k%3==0)st[3].insert(i);
		if(k%5==0)st[5].insert(i);
	
	}
	sf(q);
	while(q--)
	{
		ll x,y;
		sf(x);
		if(x==1)
		{
			sfd(l,r);sf(y);
			l--;
			r--;
			lo=st[y].lower_bound(l);
			up=st[y].upper_bound(r);
			for(it=lo;it!=up;it++)
			{
				a[*it]/=y;
				if(a[*it]%y!=0)
				st[y].erase(it);
				
			}
			if(it==up)
			{
				if(a[*it]%y==0){
				a[*it]/=y;
				if(a[*it]%y!=0)
				st[y].erase(it);}
				
			}
			
		}
		else
		{
			sfd(l,r);
			l--;
			st[2].erase(l);
			st[3].erase(l);
			st[5].erase(l);
			if(r%2==0)st[2].insert(l);
			if(r%3==0)st[3].insert(l);
			if(r%5==0)st[5].insert(l);
			a[l]=r;
			
		}
		}
		f(i,0,n){
		printf("%lld ",a[i]);
		}
		printf("\n");
	
return 0;
}
