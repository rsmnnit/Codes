#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
ll t;
sf(t);
while(t--){
 
 ll n,m,x,i,j,s=0;
 scanf("%lld%lld%lld",&n,&m,&x);
 f(i,1,n+1)
 {
 	ll tm;
 	sf(tm);
 	s+=tm;
 }
 if(-s+(n+1)*x<=m)
 {
 	if(-s+(n+1)*x>0)
 	printf("%lld\n",-s+(n+1)*x);
 	else printf("1\n");
 }
 else printf("Impossible\n");
 
}
 
return 0;
}
