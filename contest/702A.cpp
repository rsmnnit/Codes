#include<bits/stdc++.h>
using namespace std;
#define ll long int
#define sf(i) scanf("%64Id",&i)
#define sfd(a,b) scanf("%64Id%64Id",&a,&b)
#define pf(a) printf("%64Id\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
ll i,n,p,c=1,an=0,k;
sf(n);
sf(p);
an=1;
f(i,1,n)
{
sf(k);
if(k>p){
c++;p=k;}
else {
an=max(an,c);c=1;p=k;
}
}
an=max(an,c);
pf(an);
return 0;
}
