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
  ll c,d,z;
  ll mn,mx;
  sfld(c,d);
  sfl(z);
  mn= d*4+max(0LL,c-2*d)*4;
  mx =(c+d)*4;
  if(d!=0 && z>=mn &&z<=mx && z%4==0)
  pf("yes\n");
  else if(d==0 && z==4*c)
  pf("yes\n");
  else pf("no\n");
}
 
return 0;
}
