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
 double a,b,c,res;
 scanf("%lf%lf%lf",&a,&b,&c);
 res=100000.00;
 res=res/a;
 res/=b;
 res/=c;
 if(res-100000>=0)
 printf("%lld\n",(ll)(res-100000));
 else
 printf("0\n");
}
 
return 0;
}
