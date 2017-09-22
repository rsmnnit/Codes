#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll i,j,k,gud[1000001]={0},si[10000001]={0},su[1000001]={0},ans[1000001]={0},pd[10000001]={0};
int main()
{
	
	si[1]=1;
	gud[1]=1;
	f(i,2,10000001)
	{
		if(!si[i])
		{
			for(j=i;j<=10000000;j+=i)
			{si[j]=i;
			pd[j]++;
			}
		}
	}
	f(i,2,100001)
	{
		if(si[i]==i)
		{
			for(j=i*i;j<=100000;j+=(i*i))
			gud[j]=1;
		}
	}
	f(i,1,100001)
	{
		for(j=i;j<100001;j+=i)
		su[j]+=i;
	}
	ll ps=0;
	f(i,0,100001)
	{
		if(!gud[i]){
		if(si[pd[su[i]]]==pd[su[i]] && pd[su[i]]!=1)
		
		
		ps+=su[i];
		}
		ans[i]=ps;
		//printf("%lld %lld %lld\n",gud[i],si[i],su[i]);
	}
ll t;
sf(t);
while(t--){
ll x,y;
sfd(x,y);
pf(ans[y]-ans[x-1]); 
}
 
return 0;
}
