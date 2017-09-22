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
ll n,i,j,k,a[10000],h[10000]={0};
sf(n);
ll x=0,y=0;
f(i,0,n)
 {
 sf(k);
 h[k]++;
 
 
 }
 for(i=1000;i>=1;i--)
 {
 	if(h[i]>=2)
 	{
 		if(i>x)
 		{
 			if(y<x)
 			y=x;
 			x=i;
 		}
 		else
 		if(i>y)
 		{
 			if(x<y)
 			x=y;
 			y=i;
 		}
 		h[i]-=2;
 		i++;
 	}
 }
 if(x*y>0)
 pf(x*y);
 else printf("-1\n");
}
 
return 0;
}
