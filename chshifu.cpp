#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll root( ll x,ll pa[])
{
	while(pa[x]!=x)
	{
		pa[x]=pa[pa[x]];
		x=pa[x];
	}
	return x;
	
}
int main()
{
ll t;
sf(t);
while(t--){
 ll n,m,i,j,k,x,y;
 ll siz[25]={0},pa[25];
 sfd(n,m);
 ll an=n;
 f(i,1,n+1)
 {
 	siz[i]=1;pa[i]=i;
 }
 while(m--)
 {
 	sfd(x,y);
 	if(root(x,pa)!=root(y,pa)){
 	if(siz[x]>=siz[y])
 	{
 		siz[x]+=siz[y];
 		pa[root(y,pa)]=root(x,pa);
 	}
 	else{
 		siz[y]+=siz[x];
 		pa[root(x,pa)]==root(y,pa);
 	}
 	
 	}
 	
 	
 }
ll c=0;
f(i,1,n+1)
{
	if(pa[i]==i)
	c++;
	pf(pa[i]);
}
pf(c);
}
 
return 0;
}
