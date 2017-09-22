#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
map<ll,ll>mp;
ll an[100002][15]={0},a[100002],p[15];
int main()
{
	ll i,j,k,n;
	p[0]=1;
	for(i=1;i<=14;i++)
	{
		p[i]=p[i-1]*2;
	}
	p[0]=1;
	sf(n);
	f(i,0,n)
	sf(a[i]);
	for(j=1;j<=14;j++)
	{
		if(a[n-1]<=p[j])
		an[n-1][j]=a[n-1];
		else an[n-1][j]=0;
	}
	for(i=n-2;i>=0;i--)
	{
		for(j=1;j<=14;j++)
		{
			if(a[i]<=p[j])
			{
				an[i][j]=max(an[i+1][j],a[i]);
			}
			else an[i][j]=(an[i+1][j]);
		printf("%lld %lld %lld %lld %lld hi\n",i,j,an[i][j],a[i],p[j]);
		}
	}
	ll s=0;
	for(i=0;i<=n-2;i++)
	{
		if((a[i]&(a[i]+1)) ==0)
		{
			for(j=1;j<=14 && (an[i][j] <=a[i]);j++);
			j--;
			ll mx=an[i][j];
			for(k=j+1;k<14;k++)
			{
				if(an[i][k]==an[i][k+1]-1)
				mx=an[i][k];
				printf("%lld %lld \n",k,an[i][k]);
			}
			pf(mx);
			if(mx>an[i][j])
			s+=a[i];
			else
			s+=an[i][j];
		}
		else 
		{
			for(j=1;j<=14 && (an[i][j] <=a[i]);j++);
			j--;
			if(a[i]==an[i][j])
			s+=a[i];
		}
		printf("%lld %lldsum\n",i,s);
	}
	pf(s);
	
return 0;
}
