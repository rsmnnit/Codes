			/* Radheshyam Lodhi
			radheshyamlodhi64@gmail.com
			CSE-MNNIT Allahabad */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sfi(i) scanf("%d",&i)
#define sfid(a,b) scanf("%d%d",&a,&b)
#define sfl(i) scanf("%lld",&i)
#define sfld(a,b) scanf("%lld%lld",&a,&b)
#define pfl(a) printf("%lld\n",a)
#define pfi(a) printf("%d\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define pf printf
#define sf scanf
#define gc() getchar_unlocked()
#define mod (1e9+7)

int main()
{
	ll n,x,i,j,an=1;
	sfld(n,x);
	if((n-x)&1 || (n<x)||(((n-x)/2)&x))
	{
		pf("0\n");
		return 0;
	}
	ll f=0;
	if(n==x)
	f=-2;
	while(x){
		if(x&1)
		an*=2;
		x>>=1;
	}
	
	pfl(an+f);
	
return 0;
}
