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
int t,T=1;
sfi(t);
while(T<=t){
 	ll n,m,an=0,i,j,k;
 	sfld(n,m);
 	n--,m--;
 	n=min(m,n);
 	f(i,1,n+1){
 		an=an+(m-(i-1))*(n-(i-1));
 		an%=1000000007;
 	}
 	pf("Case #%lld: %lld\n",T++,an);
}
 
return 0;
}
