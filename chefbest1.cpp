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
int t;
sfi(t);
while(t--){
	set<pair<ll,ll> >v;
	set<pair<ll,ll> >::iterator it;
	ll i,j,k,n,m,an=0,f=0,p=-1,z=0;
	ll a[100008];
	sfl(n);
	f(i,0,n){
	sfl(a[i]);
	if(a[i]==0 && !f)
	{f=1;p=i;}
	if(f && a[i]==0)
	z++;
	}
	if(f){
		an=n-p-z;
	}
	pfl(an);
	
}
 
return 0;
}
