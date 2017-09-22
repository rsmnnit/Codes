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
ll n,f=0,i,j,k,s=0,ff=1;
sf(n);
f(i,0,n)
{
sf(k);
s+=k;
if(k==5)f=1;
else if(k<3)ff=0;
}
if(s/n>=4 && f &&ff) 
printf("Yes\n");
else printf("No\n");
}
 
return 0;
}
