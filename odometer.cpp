#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll dp[10000001];
ll fun(ll x)
{ll an=0;
	if(x<=10000000)
	{an+=dp[x];
	return an;}
	else
	{
	ll tm=x%10000000;
	an+=dp[tm];
		x=x/10000000;
		while(x)
		{
		if(x/10!=0)
		an=an*9;
		
		else {if(x%10>=3)
		an=an*(x%10-1);
		else an=an*(x%10);
		}
		x=x/10;
		}	
	return an;
	}

}
int main()
{dp[0]=0;
ll t;
ll n,i,j,k,g=0;
for(i=1;i<=10000000;i++)
{
	j=i;
	k=0;
	while(j &&!k)
	{
		if(j%10==3)
		k=1;
		j/=10;
	}
	if(k==0)
	g++;
	dp[i]=g;
}
sf(t);

while(t--){
 
ll x;
 sf(x);
 ll ans= fun(x);
 pf(ans);
 
 
}
 
return 0;
}
