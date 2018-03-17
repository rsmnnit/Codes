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
#define mod (1e9+7)
struct st
{
	ll x,y,z;
};
bool comp(const st &l,const st &r){
	if(l.y==r.y)
		return (l.x<r.x);
	return (l.y<r.y);
}
bool cmp(const st &l,const st &r){
	return(l.x<r.x);
}
int main()
{
 	ll n,m,i,j,k;
 	sfld(n,k);
 	struct st a[n+1];
 	f(i,0,n){
 		sfl(m);
 		a[i]={i,m,0};
 		
 	}
 	
 	sort(a,a+n,comp);
 	
 	f(i,0,n){
 		a[i].z=(a[i].y+1)/2;
 		k-=a[i].z;
 		
 	}
 	if(k<0){
 		pf("-1\n");
 		return 0;
 	}
 	
 	i=n-1;
 	while(k>0 && i>=0){
 		ll tp = min(a[i].y-a[i].z,k);
 		k-=tp;
 		a[i].z += tp;
 		i-=1;
 	}
 	sort(a,a+n,cmp);
 	f(i,0,n)
 	pf("%lld ",a[i].z);
 	pf("\n");
return 0;
}
