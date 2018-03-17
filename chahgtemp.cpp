#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll isinitial(ll a[],ll b[],ll n)
{
	int i;
	if(a[0]<a[1])// /\/\/
	{
		for(i=1;i<n;i+=2)
		{
			if(a[i]<=a[i-1])
			return 0;
			if(i<n-1)
			if(a[i+1]>=a[i])
			return 0;
		}
		return 1;
	}
	else if(a[0]>a[1]){ // \/\/\/
		for(i=1;i<n;i+=2)
		{
			if(a[i]>=a[i-1])
			return 0;
			if(i<n-1)
			if(a[i+1]<=a[i])
			return 0;
		}
		return 2;
	}
	return 0;
}
int main()
{
ll t;
sf(t);
while(t--){
	ll m,n,i,j,k,a[12],b[12];
	sf(n);
	f(i,0,n)
	sfd(a[i],b[i]);
	if(n==1)
	printf("1\n0 Inf\n");
	else if(n==2)
	{
		if(a[0]<a[1])//checked
		{
			if(b[0]<=b[1])
			printf("1\n0 Inf\n");
			else
			{
				printf("2\n0 ");
				if((a[1]-a[0])%(b[0]-b[1])==0)
				printf("%lld\n%lld Inf\n",(a[1]-a[0])/(b[0]-b[1])-1,(a[1]-a[0])/(b[0]-b[1])+1);
				else printf("%lld\n%lld Inf\n",(a[1]-a[0])/(b[0]-b[1]),(a[1]-a[0])/(b[0]-b[1])+1);
			}
		}
		else if(a[0]>a[1])//checked
		{
			if(b[1]<=b[0])
			printf("1\n0 Inf\n");
			else
			{
				printf("2\n0 ");
				if((a[0]-a[1])%(b[1]-b[0])==0)
				printf("%lld\n%lld Inf\n",(a[0]-a[1])/(b[1]-b[0])-1,(a[1]-a[0])/(b[0]-b[1])+1);
				else printf("%lld\n%lld Inf\n",(a[1]-a[0])/(b[0]-b[1]),(a[1]-a[0])/(b[0]-b[1])+1);
			}
		}
		else
		{
			if(b[0]==b[1])
			printf("0\n");
			else printf("1\n1 Inf\n");
		}
	}
	// not checked
	else{
		ll ty=isinitial(a,b,n);
		if(ty==1)// initial is /\/\/\/ ----> \/\/
		{
		
			ll im=0,mn=INT_MAX;
			for(i=1;i<n;i+=2)
			{
				if(b[i]==b[i-1] && a[i]>=a[i-1])
				im=1;
				else if(b[i]>b[i-1] && a[i]>a[i-1])
				im=1;
				else if(b[i]<b[i-1])
				{
					if((a[i]-a[i-1])%(b[i-1]-b[i])==0)
					mn=min(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					else
					mn=min(mn,(a[i]-a[i-1])%(b[i-1]-b[i]));
				}
				if(i<n-1){
				if(b[i]==b[i+1] && a[i]>=a[i+1])
				im=1;
				else if(b[i]>b[i+1] && a[i]>a[i+1])
				im=1;
				else if(b[i]<b[i+1])
				{
					if((a[i]-a[i+1])%(b[i+1]-b[i])==0)
					mn=min(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
					else
					mn=min(mn,(a[i]-a[i+1])%(b[i+1]-b[i]));
				}
				}
			}
			if(mn!=INT_MAX && !im)
			printf("1\n0 Inf\n");
			else printf("1\n0 %lld\n",mn);
			
		}
		else if(ty==2)// initial is \/\/\/\/ -----> /\/\/
		{
			ll im=0,mn=INT_MAX;
			for(i=1;i<n;i+=2)
			{
				if(b[i]==b[i-1] && a[i]<=a[i-1])
				im=1;
				else if(b[i]<b[i-1] && a[i]<a[i-1])
				im=1;
				else
				if(b[i]>b[i-1])
				{
					if((a[i-1]-a[i])%(b[i]-b[i-1])==0)
					mn=min(mn,(a[i]-a[i-1])/(b[i-1]-b[i])-1);
					else
					mn=min(mn,(a[i]-a[i-1])%(b[i-1]-b[i]));
				}
				if(i<n-1){
				if(b[i]==b[i+1] && a[i]<=a[i+1])
				im=1;
				else if(b[i]<b[i+1] && a[i]<a[i+1])
				im=1;
				else if(b[i]>b[i+1])
				{
					if((a[i+1]-a[i])%(b[i]-b[i+1])==0)
					mn=min(mn,(a[i]-a[i+1])/(b[i+1]-b[i])-1);
					else
					mn=min(mn,(a[i]-a[i+1])%(b[i+1]-b[i]));
				}
				}
			}
			if(mn!=INT_MAX && !im)
			printf("1\n0 Inf\n");
			else printf("1\n0 %lld\n",mn);
		}
		
		// checked----
		
		else // not initialy  
		{
			ll im1=0,mn1=INT_MAX;// \/\/
			for(i=1;i<n;i+=2)
			{
			
				if(b[i]==b[i-1] && a[i]>=a[i-1])
				im1=1;
				else if(b[i]>b[i-1] && a[i]>a[i-1])
				im1=1;
				else if(b[i]<b[i-1])
				{
					im1=1;
				}
				else{
					mn1=min(mn1,(a[i]-a[i-1])%(b[i-1]-b[i])+1);
				}
				
				
				if(i<n-1){
				if(b[i]==b[i+1] && a[i]>=a[i+1])
				im1=1;
				else if(b[i]>b[i+1] && a[i]>a[i+1])
				im1=1;
				else if(b[i]<b[i+1])
				{
					im1=1;
				}
				else{
					mn1=min(mn1,(a[i]-a[i+1])%(b[i+1]-b[i])+1);
				}
				}
			}
			
			///-----
			ll im2=0,mn2=INT_MAX;// /\/\/
			for(i=1;i<n;i+=2)
			{
			
				if(b[i]==b[i-1] && a[i]<=a[i-1])
				im2=1;
				else if(b[i]<b[i-1] && a[i]<a[i-1])
				im2=1;
				else if(b[i]>b[i-1])
				{
					im2=1;
				}
				else{
					mn2=min(mn2,(a[i]-a[i-1])%(b[i-1]-b[i])+1);
				}
				if(i<n-1){
				if(b[i]==b[i+1] && a[i]<=a[i+1])
				im2=1;
				else if(b[i]<b[i+1] && a[i]<a[i+1])
				im2=1;
				else if(b[i]>b[i+1])
				{
					im2=1;
				}
				else{
					mn2=min(mn2,(a[i]-a[i+1])%(b[i+1]-b[i])+1);
				}
				}
			}
			//printf("%lld %lld\n",im1,im2);
			if(im1==0 && im2==0)
			printf("1\n%lld Inf\n",min(mn1,mn2));
			else if(!im2)
			printf("1\n%lld Inf\n",mn2);
			else if(!im1)
			printf("1\n%lld Inf\n",mn1);
			else printf("0\n");
		}
	}
	
	
	
}
 
return 0;
}
