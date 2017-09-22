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
	ll h,s,i,j,k;
	long double a,b,c,x,y;
	sfd(h,s);
	if((h*h)<(2*s))
	{
		printf("-1\n");
	}
	else
	{
		x=(long double)sqrt((double)(h*h*1.0+4*s));
		y=(long double)sqrt((double)(h*h*1.0-4*s));
		a=((long double)sqrt((long double)(h*h*1.0+4*s))+(long double)sqrt((double)(h*h*1.0-4*s)))/2;
		b=((long double)sqrt((long double)(h*h*1.0+4*s))-(long double)sqrt((double)(h*h*1.0-4*s)))/2;
		long double aa[3];
		aa[0]=h;
		aa[1]=a;
		aa[2]=b;
		sort(aa+0,aa+3);
		if(a>0 &&b>0 &&h>0)
		printf("%Lf %Lf %Lf\n",aa[0],aa[1],aa[2]);
		else printf("-1\n");
	}
}
 
return 0;
}
