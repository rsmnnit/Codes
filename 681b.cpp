#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll _gcd(ll a ,ll b)
{
return b==0?a:_gcd(b,a%b);
}
int main()
{
 ll n;
 sf(n); 
ll a=1234567;
ll b=123456;
ll c=1234;
ll g=_gcd(a,b);
g=_gcd(b,c);
pf(g);

 if(!n)
 printf("YES\n");
 else printf("NO\n");
return 0;
}
