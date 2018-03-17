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
#define mod (long)(1e9+7)
ll a[500009],n,b;
bool can(ll m){
	ll c=0,i;
	for(i=0;i<n;i++){
		c+=a[i]/m+(a[i]%m>0);

	}
	//pf("%lld %lld\n",m,c);
	if(c<=b)
		return true;
	return false;
}
int main()
{
 	
 	while(sfld(n,b) && n!=-1||b!=-1){
 	ll i,j,k,mx=0;
 	f(i,0,n)
 	{
 		sfl(a[i]);
 		mx = max(mx,a[i]);
 	}
 	ll l=1,r=mx,an=-1;
 	while(l<=r){
 		ll m = l+(r-l)/2;
 		if(can(m))
 		{	r=m-1;
 			an = m;
 		}
 		else 
 			l=m+1;

 	}
 	pfl(an);
 }
return 0;
}
