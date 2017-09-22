#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
ll t,T=1;
sf(t);
while(t--){
ll a[55][55];
ll an=0;
ll m,n,i,j,k,r,l,u,d;
sfd(n,m);
f(i,0,n)
f(j,0,m)
sf(a[i][j]);
ll h[55][55]={0};
memset(h,0,sizeof h);
f(i,1,n-1)
{
	f(j,1,m-1)
	{
		l=a[i][j];
		r=l;u=l;d=l;
		if(!h[i][j-1])
		{
		for(k=j-1;k>=0;k--)
		l=max(l,a[i][k]);
		}
		else l=a[i][j-1];
		for(k=j+1;k<m;k++)
		r=max(r,a[i][k]);
		if(!h[i-1][j]){
		for(k=i-1;k>=0;k--)
		u=max(u,a[k][j]);
		}
		else u=a[i-1][j];
		for(k=i+1;k<n;k++)
		d=max(d,a[k][j]);
		//printf("%lld %lld %lld %lld\n",l,r,u,d);
		ll mn=min(l,min(r,min(u,d)));
		if(mn>a[i][j]){
		an+=mn-a[i][j];
		a[i][j]=mn;
		}
		h[i][j]=1;
		
		//pf(an);
	}
}
printf("Case #%lld: %lld\n",T++,an);
}
 
return 0;
}
