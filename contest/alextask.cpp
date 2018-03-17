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
#define gc() getchar_unlocked()
#define mod (1e9+7)
ll gcd(ll a,ll b){
	return b==0?a:gcd(b,a%b);
}
int main()
{
int t;
sfi(t);
while(t--){
 	ll n,i,j,ans=1000000000000000000LL,a[505];
 	sfl(n);
 	f(i,0,n)
 	sfl(a[i]);
 	f(i,0,n)
 	f(j,i+1,n)
 	ans=min(ans,(a[i]*a[j])/gcd(a[i],a[j]));
 	pfl(ans);
}
 
return 0;
}
