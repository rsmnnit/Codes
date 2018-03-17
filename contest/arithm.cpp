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
	ll n,c,i,j;
	sfd(n,c);
		if(n%2)
		{
			if(c%(2*n)==0)
			{
				c-=n;
				if(c>=(1+n/2))
				{printf("Yes\n");
				}
				else printf("No\n");
				
			}
			else printf("No\n");
		}
		else
		{
			if(c%(n/2)==0)
			{
				c-=(n/2);
				if(c>=(1+n))
				{printf("Yes\n");
				}
				else printf("No\n");
				
			}
			else printf("No\n");
		
		
		}
		
		
}
 
return 0;
}
