#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
int main()
{
ll t;
sf(t);
while(t--){
ll i,j,k,m,n,an=0,ar[10009];
sf(n);
for(i=1;i<=n;i++)
{
sf(ar[i]);
}
ar[0]=0;
for(i=0;i<n;i++)
{
sf(m);
if(ar[i+1]-ar[i]>=m)
an++;
}
pf(an);
}
 
return 0;
}
