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

int main()
{
int t;
sfi(t);
while(t--){
 ll n,a[100005],i,j,ans=0;
 sfl(n);
 f(i,0,n)sfl(a[i]);
 sort(a,a+n);
ll pr=0;
 for(i=n-2;i>=0;i--){
 ans=ans+pr+a[i];
 pr=pr+a[i];}
 ans=ans+pr+a[n-1];
 pfl(ans);
}
 
return 0;
}
