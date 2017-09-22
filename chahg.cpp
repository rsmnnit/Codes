//if initial is true then find ending time
// if initial is false find starting time
// for n==2 separate case
// and then u r done (y)
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
	ll x,y,n,i,j,k,a[11],b[11],st,en;
	sf(n);
	f(i,0,n)
	{
		sfd(a[i],b[i]);
	}
	
	if(n==1)
	printf("1\n0 Inf\n");
	else if(n==2)
	{
		if(a[0]!=a[1])
		{
			if((a[0]-a[1])/(b[1]-b[0])<0)
			printf("1\n0 Inf\n");
			else
			printf("2\n0 %lld\n%lld Inf\n",(abs(a[0]-a[1])%abs(b[1]-b[0])==0)?(a[0]-a[1])/(b[1]-b[0])-1:(a[0]-a[1])/(b[1]-b[0]),(abs(a[0]-a[1])%abs(b[1]-b[0])==0)?(a[0]-a[1])/(b[1]-b[0])+1:(a[0]-a[1])/(b[1]-b[0]));
			
		}
		else
		{
			if(b[0]!=b[1])
			printf("1\n0 Inf\n");
			else printf("0\n");
		}
	}
	else{
		//find max of starting time
		//find min of end times
		ll mx=INT_MIN,f1=0,f2=0;
		k=0;
		for(i=1;i<n;i+=2)////  \/\/\/\/
		{
				if(b[i]==b[i-1])
				{
					if(a[i]>=a[i-1])
					f1=1;
					else mx=max(mx,k);
				}
				else if(b[i]<b[i-1] && a[i-1]<a[i])
				mx=max(mx,k);
				else if(b[i]<b[i-1])
				f1=1;
				else
				mx=max(mx,(a[i-1]-a[i])/(b[i]-b[i-1])+1);
				//printf("%lld mx\n",mx);
			if(i<n-1)
			{
				if(b[i]==b[i+1])
				{
					if(a[i]>=a[i+1])
					f1=1;
					else mx=max(mx,k);
				}
				else if(b[i]<b[i+1] && a[i+1]<a[i])
				mx=max(mx,k);
				else if(b[i]<b[i+1])
				f1=1;
				else
				mx=max(mx,(a[i+1]-a[i])/(b[i]-b[i+1])+1);
				
				
				
			}
			//printf("%lld mx\n",mx);
		}
		ll mx2=INT_MIN;
		k=0;
		for(i=0;i<n;i+=2)//// /\/\/\/
		{
			if(i>0)
			{
				if(b[i]==b[i-1])
				{
					if(a[i]>=a[i-1])
					f2=1;
					else mx2=max(mx2,k);
				}
				else if(b[i]<b[i-1] && a[i-1]<a[i])
				mx2=max(mx2,k);
				else if(b[i]<b[i-1])
				f2=1;
				else
				mx2=max(mx2,(a[i-1]-a[i])/(b[i]-b[i-1])+1);
				
				
			}
			if(i<n-1)
			{
				if(b[i]==b[i+1])
				{
					if(a[i]>=a[i+1])
					f2=1;
					else mx2=max(mx2,k);
				}
				else if(b[i]<b[i+1] && a[i+1]<a[i])
				mx2=max(mx2,k);
				else if(b[i]<b[i+1])
				f2=1;
				else
				mx2=max(mx2,(a[i+1]-a[i])/(b[i]-b[i+1])+1);
				
				
				
			}
			//printf("%lld mx2\n",mx2);
		}
		
		//printf("%lld %lld %lld %lldmmm\n",f1,f2,mx,mx2);
		
		/*-----------------------------------------------------------*/
		
		
		
		if(f1&f2)
		printf("0\n");
		else if(f1==0 && f2==0)
		{
		if(min(mx,mx2)>0)
		printf("1\n%lld Inf\n",min(mx,mx2));
		else{
			if(mx<=mx2){
			for(i=0;i<n;i++)
			a[i]+=mx*b[i];
				printf("1\n%lld ",mx);/// find in \/\/\/
				ll mn=INT_MIN,ff2=0;
				for(i=1;i<n;i+=2)//// /\/\/\/
				{
					if(b[i]==b[i-1])
					 ff2=1;
					 else
					if(a[i]<a[i-1] && b[i-1]<b[i])
					  mn=max(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					else if(a[i]<a[i-1] || b[i-1]<b[i])
					ff2=1;
					else mn=max(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					if(i<n-1)
					 {
					 	if(b[i]==b[i+1])
					 	ff2=1;
					 	else
					 	if(a[i]<a[i+1] && b[i+1]<b[i])
					 	 mn=max(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
						else if(a[i]<a[i+1] || b[i+1]<b[i])
						ff2=1;
						else mn=max(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
					 }
				}
				if(mn<mx || ff2)
				printf("Inf\n");
				else printf("%lld\n",mn);
				
			}
			else
			{
			for(i=0;i<n;i++)
			a[i]+=mx2*b[i];
				printf("1\n%lld ",mx2);// find in /\/\/\/
				ll mn=INT_MIN,ff2=0;
				for(i=0;i<n;i+=2)//// /\/\/\/
				{
					if(i>0)
					{
					if(b[i]==b[i-1])
					 ff2=1;
					 else
					if(a[i]<a[i-1] && b[i-1]<b[i])
					  mn=max(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					else if(a[i]<a[i-1] || b[i-1]<b[i])
					ff2=1;
					else mn=max(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					
					}
					if(i<n-1)
					 {
					 	if(b[i]==b[i+1])
					 	ff2=1;
					 	else
					 	if(a[i]<a[i+1] && b[i+1]<b[i])
					 	 mn=max(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
						else if(a[i]<a[i+1] || b[i+1]<b[i])
						ff2=1;
						else mn=max(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
					 }
				}
				if(mn<mx2 || ff2)
				printf("Inf\n");
				else printf("%lld\n",mn);
			}
		}
		}
		else if(!f1)
		{
			for(i=0;i<n;i++)
			a[i]+=mx*b[i];
				printf("1\n%lld ",mx);/// find in \/\/\/
				ll mn=INT_MIN,ff2=0;
				for(i=1;i<n;i+=2)//// /\/\/\/
				{
					if(b[i]==b[i-1])
					 ff2=1;
					 else
					if(a[i]<a[i-1] && b[i-1]<b[i])
					  mn=max(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					else if(a[i]<a[i-1] || b[i-1]<b[i])
					ff2=1;
					else mn=max(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					if(i<n-1)
					 {
					 	if(b[i]==b[i+1])
					 	ff2=1;
					 	else
					 	if(a[i]<a[i+1] && b[i+1]<b[i])
					 	 mn=max(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
						else if(a[i]<a[i+1] || b[i+1]<b[i])
						ff2=1;
						else mn=max(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
					 }
					// printf("%lld %lldmn\n",mn,ff2);
				}
				if(mn<mx )
				printf("Inf\n");
				else printf("%lld\n",mn);
				
			}
			
		
		else
		{
			for(i=0;i<n;i++)
			a[i]+=mx2*b[i];
				printf("1\n%lld ",mx2);// find in /\/\/\/
				ll mn=INT_MIN,ff2=0;
				for(i=0;i<n;i+=2)//// /\/\/\/
				{
					if(i>0)
					{
					if(b[i]==b[i-1])
					 ff2=1;
					 else
					if(a[i]<a[i-1] && b[i-1]<b[i])
					  mn=max(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					else if(a[i]<a[i-1] || b[i-1]<b[i])
					ff2=1;
					else mn=max(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					
					}
					if(i<n-1)
					 {
					 	if(b[i]==b[i+1])
					 	ff2=1;
					 	else
					 	if(a[i]<a[i+1] && b[i+1]<b[i])
					 	 mn=max(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
						else if(a[i]<a[i+1] || b[i+1]<b[i])
						ff2=1;
						else mn=max(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
					 }
				}
				if(mn<mx2 || ff2)
				printf("Inf\n");
				else printf("%lld\n",mn);
		
	
	}
	}
}
 
return 0;
}
