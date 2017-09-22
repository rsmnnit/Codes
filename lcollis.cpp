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
 ll n,m,i,j,k,su=0;
 char s[12][12];
 sfd(n,m);
 f(i,0,n)
scanf("%s",s[i]);
 f(i,0,m)
 {
 	ll c=0;
 	f(j,0,n)
 	if(s[j][i]=='1')
 	c++;
 	su+=(c*(c-1))/2;
 }
 pf(su);
}
 
return 0;
}
