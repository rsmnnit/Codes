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

map<ll,ll> mp;
ll a[100009],n,b[100009];
int main()
{
 ll i,j,k=0;
 sfl(n);
 f(i,0,n){
 	sfl(a[i]);
 	k+=a[i];
 }
 b[0]=a[0];
 f(i,1,n)b[i]=a[i]+b[i-1];
 if(k&1)
 {
 	pf("NO\n");
 	return 0;
 }
 k/=2;
i = 0;
ll s=0,f=0;
mp[a[n-1]]=1;
for(i=n-2;i>=0;i--){
	if(mp[b[i]-k]>0)
		f=1;
	mp[a[i]]=1;
}
 if(f)
 	pf("YES\n");
 else pf("NO\n");

return 0;
}
