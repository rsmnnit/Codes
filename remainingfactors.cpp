#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll a[100],n,mm;
ll bisearch(ll i,ll l,ll r)
{
	if(r<0)
	return l;
	//printf("%lld %lld\n",l,r);
	if(l==r)
	return l;
	else{
	ll m=(l+r)/2;
	if(l==m)
	return l;
	if(a[m]*i <mm)
	return bisearch(i,m+1,r);
	else if(a[m]*i >mm)
	return bisearch(i,l,m-1);
	else return m;
	}
}
int main()
{
	 ll i,j=0,k;
	 sf(n);
	 mm=n;
	 ll ans=0;
	 for(i=2;i*i<=n;i++)
	 {
	 	k=1;
	 	while(n%i==0)
	 	{
	 		n/=i;
	 		k*=i;
	 		//pf(k);
	 	}
	 	if(k>1)
	 	a[j++]=k;
	 }
	 if(n>1)
	 a[j++]=k;
	 for(i=0;i<j-1;i++)
	 {
	 	
	 	ll se=bisearch(a[i]*a[i],0,j-1)+1;
	 	//pf(se);
	 	ans+=se;
	 }
	 pf(ans);
	 
	 
return 0;
}
