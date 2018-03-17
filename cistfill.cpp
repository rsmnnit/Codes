#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define f(i,l,n) for(i=l;i<n;i++)
#define sf(a) scanf("%d",&a)
#define pf(a) printf("%lld",a)
double vol,vo;
const double eps = 1e-9;
struct cist{
double b,h,w,l;
};
bool comp(cist v1,cist v2)
{
return v1.b<v2.b;
}
double bisearch(double lo,double hi,cist v[])
{double m;
	while(lo+eps<hi)
	{
		 vo=0.0;
		 double k;
		m=(hi+lo)/2.0;
		int i;
		for(i=0;v[i].b <m;i++)
		{
			k=v[i].l*v[i].w*1.0+eps;
			if(v[i].b+v[i].h*1.0<=m)
			k=k*v[i].h*1.0+eps;
			else
			k=k*(m-v[i].b*1.0)+eps;
			vo+=k;
		}
		if(vo<vol)
		lo=m;
		else
		hi=m;
	}
	return lo;
}
int main()
{
int t;
sf(t);
while(t--)
{
	cist v[50009];
	vector<ll>::iterator it;
	int i,j,k,n,lo,hi,b,h,w,l,mx=0;
	double an;
	sf(n);
	double volume = 0.0;
	f(i,0,n)
	{
		scanf("%lf%lf%lf%lf",&v[i].b,&v[i].h,&v[i].w,&v[i].l);
		mx=max(v[i].b+v[i].h*1.0,mx*1.0);
		volume = volume + v[i].w*v[i].h*v[i].l+eps;
	}
	scanf("%lf",&vol);
	if(volume+eps<vol)
	printf("OVERFLOW\n");
	else
	{
	sort(v+0,v+n,comp);
	an=bisearch(0.0,mx*1.0,v);
	printf("%.2lf\n",an+eps);
	}
}
 
return 0;
} 
