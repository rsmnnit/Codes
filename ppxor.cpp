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
	ll n,i,j,k,c[35][2],an=0,s=0;
	sf(n);
	f(i,0,31){
	c[i][0]=1;
	c[i][1]=0;
	}
	f(i,0,n)
	{
		sf(k);
		s^=k;
		f(j,0,31)
		{
			ll p= 1<<j;
			if(s&(1<<j))
			an+=p*c[j][0];
			else an+=p*c[j][1];
		}
		f(j,0,31)
		{
			if(s&(1<<j))
			c[j][1]++;
			else c[j][0]++;
			
		}
	}
	pf(an);
}
 
return 0;
}
