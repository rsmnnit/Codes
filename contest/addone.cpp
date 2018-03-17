#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
 ll n,a[1000000],i,j,c=1;
 sf(n);
 f(i,0,n)
 sf(a[i]);
 for(i=n-1;i>=0 && c;i--)
 {
 	a[i]+=c;
 	c=a[i]/10;
 	a[i]%=10;
 }
 if(c)
 printf("%lld ",c);
 f(i,0,n)
 printf("%lld ",a[i]);
 printf("\n");
return 0;
}
