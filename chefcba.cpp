#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define ff long double
int main()
{
ll a[5],i,j,k;
sfd(a[0],a[1]);
sfd(a[2],a[3]);
sort(a+0,a+4);
ll f=0;
if(((ff)(a[0]*1.0)/a[1])==((ff)(a[2]*1.0)/a[3]))
f=1;
else if(((ff)(a[0]*1.0)/a[2])==((ff)(a[1]*1.0)/a[3]))
f=1;
else
if(((ff)(a[0]*1.0)/a[3])==((ff)(a[1]*1.0)/a[2]))
f=1;
if(f)
cout<<"Possible"<<endl;
else cout<<"Impossible"<<endl;
return 0;
}
