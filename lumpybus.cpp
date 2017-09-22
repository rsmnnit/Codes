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
	ll an=0,n,p,q,i,j,k,a[100009];
	sfd(n,p);
	sf(q);
	f(i,0,n)
	sf(a[i]);
	sort(a,a+n);
	for(i=0;i<n ;i++)
	{
		if(a[i]%2==0)
		{
			if(2*q>=a[i])
			{
				an+=1;
				q-=a[i]/2;
			}
			else if(a[i]-2*q<=p)
			{
				an+=1;
				p=p-(a[i]-2*q);
				q=0;
			}
		}
		else
		{
		if(p>0){
			if(q>=a[i]/2)
			{
				an+=1;
				p--;
				q-=a[i]/2;
			}
			else
			if(q*2+p>=a[i])
			{
				an+=1;
				p=p-(a[i]-(q*2));
				q=0;
			}
			
		}
		}
		//pf(an);
		
	}
	pf(an);
}
 
return 0;
}
