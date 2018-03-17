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

int main()
{
int t;
sfi(t);
while(t--){
 ll n,q,a[10000],i,j,k;
 sfld(n,q);
 f(i,1,1+n){
 	sfl(a[i]);
 }
 while(q--){
 	ll x,y,c,d;
 	sfld(x,y);
 	sfld(c,d);
 	ll dif = 0;
 	ll h[1002],h2[1002];
 	memset(h,0,sizeof h);
 	memset(h2,0,sizeof h2);
 	vector<ll>v1,v2;
 	ll xx =x;
 	while(x<=y && c<=d){
 		v1.pb(a[x]);
 		v2.pb(a[c]);
 		x++;c++;
 	}
 	sort(v1.begin(),v1.end());
 	sort(v2.begin(),v2.end());
 	for(i=xx;i<=y;i++){
 		if(v1[i-xx]!=v2[i-xx])
 			dif++;
// 		pf("%lld %lld\n",v1[i-x],v2[i-x]);
 	}

if(dif<=1)
	pf("YES\n");
else pf("NO\n");

 }
}
 
return 0;
}
