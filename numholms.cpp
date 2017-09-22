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
ll n,h[11]={0};
ll s=0,i,j,k;
sf(n);
f(i,0,n)
{
sf(k);h[k]++;
s+=k;
s%=3;
}
if(h[0]==0)
printf("-1\n");
else if(s==0)
{
	
	if(h[0]==n)
	printf("0\n");
	else{
		for(i=9;i>=0;i--)
		while(h[i]--)
		printf("%lld",i);
		printf("\n");
	}
}
else 
{
	if(s==1)
	{
	ll f=0;
		if(h[1])
		h[1]--;
		else if(h[4])
		h[4]--;
		else if(h[7])
		h[7]--;
		else if(h[2]>=2)
		h[2]-=2;
		else if(h[2] && h[5])
		{
			h[2]--;h[5]--;
		}
		else if(h[5]>=2)
		h[5]-=2;
		else if(h[8] && h[2])
		{
			h[8]--;h[2]--;
		}
		else if(h[5] && h[8])
		{
			h[5]--;h[8]--;
		}
		else if(h[8]>=2)
		h[8]-=2;
		else f=1;
		if(f)
		printf("-1\n");
		else
		{
		k=0;
		for(i=1;i<=9;i++)
		k+=h[i];
		if(k){
			for(i=9;i>=0;i--)
			while(h[i]--)
			printf("%lld",i);
			printf("\n");
		}
		else printf("0\n");
		}
		
	}
	else if(s==2)
	{
	ll f=0;
		
		if(h[2])
		h[2]--;
		
		else if(h[5])
		h[5]--;
		
		else if(h[8])
		h[8]--;
		else if(h[1]>=2)
		h[1]-=2;
		else if(h[1] && h[4])
		{
			h[1]--;h[4]--;
		}
		
		else if(h[4]>=2)
		h[4]-=2;
		else if(h[1] && h[7])
		{
			h[1]--;h[7]--;
		}
		else if(h[4] && h[7])
		{
			h[4]--;h[7]--;
		}
		else if(h[7]>=2)
		h[7]-=2;
		else f=1;
		if(f)
		printf("-1\n");
		else
		{
		k=0;
		for(i=1;i<=9;i++)
		k+=h[i];
		if(k){
			for(i=9;i>=0;i--)
			while(h[i]--)
			printf("%lld",i);
			printf("\n");
		}
		else printf("0\n");
		}
	}
	
	
}
}
 
return 0;
}
