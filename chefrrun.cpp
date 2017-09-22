#include<bits/stdc++.h>
using namespace std;
#define ll int
#define sf(i) scanf("%d",&i)
#define sfd(a,b) scanf("%d%d",&a,&b)
#define pf(a) printf("%d\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
 
int main()
{
ll t;
sf(t);
while(t--){
	ll i,j,k,a[100010],h[100010],an[100010],n,ans=0;
	sf(n);
	f(i,0,n){
	sf(a[i]);
	h[i]=0;
	}
	f(i,0,n)
	{
		if(h[i]==0)
		{
			ll nu=1;
			j=i;
			do{
				h[j]=i+1;
				an[j]=nu;
				nu++;
				j=(j+a[j]+1)%n;
			}
			while(!h[j]);
			if(h[j]==i+1)
			ans+=(nu-an[j]);
		}
	}
	pf(ans);
}
 
return 0;
}
