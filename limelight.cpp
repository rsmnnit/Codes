#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define mod 1000000009
ll a[10000001];
int main()
{
	ll i,j,k,p,q,r,s,pp,qq,rr,ss,kk;
	a[2]=10;
	a[1]=1;
	a[3]=25;
	p=4;q=2;r=1;s=3;qq=2;rr=1;ss=3,k=5,kk=1;
	for(i=4;i<=10000000;i+=2)
	{
		p+=i*i;
		p%=mod;
		
		qq=qq+8*(kk);
		kk++;
		qq%=mod;
		q+=qq;
		q%=mod;
		rr=rr+(k-2)*2;
		rr%=mod;
		r+=rr;
		r%=mod;
		ss+=2*k;
		k+=4;
		ss%=mod;
		s+=ss;
		s%=mod;
		
		a[i]=(p+q+r+s)%mod;
		//printf("%lld %lld %lld %lld\n",p,q,r,s);
	}
	p=10;q=5;r=7;s=3;qq=5;rr=7;ss=3,k=5,kk=1;
	for(i=5;i<=11;i+=2)
	{
		p+=i*i;
		p%=mod;
		
		
		ss+=2*k;
		k+=4;
		ss%=mod;
		s+=ss;
		s%=mod;
		
		a[i]=(p+p+s+s-1)%mod;
		//printf("%lld %lld %lld %lld\n",p,q,r,s);
	}
	ll t;
	sf(t);
	while(t--){
	ll n;
	sf(n);
	pf(a[n]); 
	}
 
return 0;
}
