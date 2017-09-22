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
	ll a[102]={0};
	ll n,i,j,k,an=0;
	sfd(n,k);
	f(i,1,n+1)
	{
	sf(j);
	if(j==i)
	a[i]=-1;
	if(a[j]>=0)
	a[j]+=1;
	}
	f(i,1,n+1)
	if(a[i]>=k)
	an++;
	pf(an);
}
 
return 0;
}
