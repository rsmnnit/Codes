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
ll n,i,j,k,s=0,ans=0,od=0,a[1000003],l=0,r=0;
sf(n); 
f(i,1,n+1)
{
sf(k);
s+=k;
s%=2;
if(k%2 && !l)
{l=i;r=i;}
if(k%2==1)
r=i;
}
if(s==0)
ans=n;
else
ans=max(max(l-1,n-l),max(r-1,n-r));
//else ans=n;
pf(ans);
}
return 0;
}
