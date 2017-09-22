#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll po[100002];

long long degree(long long a, long long k, long long p) {
long long res = 1;
long long cur = a;

while (k) {
    if (k % 2) {
      	res = (res * cur) % p;
    	}
    k /= 2;
    cur = (cur * cur) % p;
  }
  return res;
}

int main()
{
ll t;
sf(t);
while(t--){
	ll n,k,a[100001],i,j,c=0,tm;
	ll p=1000000007;
	cin>>n>>k;
	j=2;
	f(i,1,100001)
	{
		po[i]=j%p;
		j*=2;
		j%=p;
	}
	po[0]=1;
	f(i,0,n)
	{
		cin>>a[i];
		if(a[i]==0)
		c++;
	}
	if(c &&(k>=n-c))
	{
		k=min(k,n-c);
		ll an=1;
		pf(po[k]);
		
	}
	else if(c &&(k<n-c))
	{
		n=n-c;
		ll an=0;
		ll pre=1;
		an+=pre;
		f(i,1,k+1)
		{
			pre=pre*(n-i+1);
			pre%=p;
			ll de=degree(i,p-2,p);
			pre*=de;
			pre%=p;
			an+=pre;
			an%=p;
		}
		pf(an);
	}
	else
	{
		if(k>n)
		k=n;
		if(k==n)
			pf(po[k-1]);	
		else{
		ll an=0;
		ll st=0;
		if(k&1)
		st=1;
		ll pre=1;
		if(st)
		pre=n;
		an+=pre;
		for(i=st+2;i<=k;i+=2)
		{
			pre=((pre*(n-i+1))%p*(n-i+2)%p)%p;
			ll de=degree((i%p*(i-1)%p)%p,p-2,p);
			pre*=de;
			pre%=p;
			an+=pre;
			an%=p;
		}
		printf("%lld\n",(an+p)%p);
		}
	}
}
return 0;
}
