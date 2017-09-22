#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
	ll n,i,j,k,m,a[505];
	sf(n);
	f(i,0,n)
	f(j,0,n)
	{
		sf(k);
		if(k)
		a[i]=j;
	}
	sf(m);
	while(m--){
	printf("1\n");
		ll x,y,an[505],ans;
		f(i,0,n)
		an[i]=-1;
		sfd(k,x);
		x--;
		y=0;
		i=x;
		j=0;
		while(an[i]==-1 && j<k)
		{
			an[i]=y;
			y++;
			j++;
			ans=a[i];
			i=a[i];
		}
		if(j==k)
		pf(ans+1);
		else
		{
			//k=k-an[i];
			//i=a[i];
			ans=a[i];
			k=(k-j)%(k-an[i]);
			while(k--)
			{
				ans=a[i];
				i=a[i];
			}
			pf(ans+1);
		}
		
	}
	
return 0;
}
