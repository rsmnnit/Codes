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
	ll n,i,j,k,a[10004],b[10005],mx=-1,f=0;
	int vis[10004]={0};
	memset(vis,0,sizeof vis);
	sf(n);
	f(i,0,n)
	sf(b[i]);
	f(i,0,n)
	sf(a[i]);
	ll su=0;
	f(i,0,n)
	su=su+a[i]+b[i];
	if(su%n==0)
	{
		ll m=su/n;
		//printf("%lld m\n",m);
		
		
		if(a[0]!=m)
		{
			if(a[0]+b[0]==m)
			vis[0]=1;
			else if(a[0]+b[1]==m)
			vis[1]=1;
			else if(a[0]+b[1]+b[0]==m)
			{
			vis[0]=1;vis[1]=1;
			}
			else f=1;
		}
		if(!f)
		f(i,1,n)
		{
			if(a[i]!=m){
			if(vis[i-1]!=1 && (a[i]+b[i-1]==m))
			{
				vis[i-1]=1;
			}
			else if(vis[i-1]!=1 && vis[i]!=1 && (a[i]+b[i-1]+b[i]==m))
			{
				
				vis[i]=1;vis[i-1]=1;
				
			}
			else if( vis[i+1]!=1 && vis[i]!=1 && vis[i-1]!=1 &&(a[i]+b[i+1]+b[i]+b[i-1]==m))
			{
				
				vis[i]=1;vis[i+1]=1;vis[i-1]=1;
				
			}
			else if(vis[i-1]!=1 && i<n &&vis[i+1]!=1 && (a[i]+b[i-1]+b[i+1]==m))
			{
				
				vis[i+1]=1;vis[i-1]=1;
				
			}
			else if(vis[i]!=1 && (a[i]+b[i]==m))
			{
				vis[i]=1;	
			
			}
			
			
			
			else if(i<n &&vis[i+1]!=1 && vis[i]!=1 &&(a[i]+b[i+1]+b[i]==m))
			{
				vis[i]=1;vis[i+1]=1;
				
			}
			else if(i<n && vis[i+1]!=1 && (a[i]+b[i+1]==m))
			{
				vis[i+1]=1;	
			
			}
			
			else {
				f=1;break;
			}
		}
		}
		f(i,0,n)
		if(!vis[i])f=1;
		if(f)
		printf("-1\n");
		else 
		pf(m);
	}
	else printf("-1\n");
}
 
return 0;
}
