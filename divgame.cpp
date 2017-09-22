#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll sie[1000002]={0};
int main()
{
ll t;
ll i,j,k,n;

	sf(n);
	f(i,0,n)
	{
		sf(k);
		
		
			if((k==2||k==17 ))
			printf("Mike\n");
			else if(k==16||k==34||k==289)
			printf("Tom\n");
		
		else
		{
		
			ll f=0;
			
			for(j=2;j*j<=k;j++)
			
			{
				if(k%j==0)
				{
					f=1;break;
				}
			}
			if(!f)
			printf("Tom\n");
			else printf("Mike\n");
			
		}
	}

 
return 0;
}
