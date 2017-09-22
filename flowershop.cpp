#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define Ld long double
int main()
{
ll T=1,t;
sf(t);
while(T<=t){
ll n,a,b,c,d;
long double r=0.0;
sf(n);
if(n==1){
	sfd(a,b);
	r=(long double)b*1.0/(long double)a-1.00;
	if(a==0)
	r=0.0;
	printf("Case #%lld: %.10Lf\n",T,r);
}
else
{
sfd(a,b);sf(c);
Ld r1,r2;
r1=((Ld)((Ld)(b*1.0-2*a)+(Ld)sqrt((Ld)((b*1.0-2*a)*(b*1.0-2*a)-4*a*(a-b-c)))))/(Ld)(2*a*1.0);
r2=((Ld)((Ld)(b*1.0-2*a)-(Ld)sqrt((Ld)((b*1.0-2*a)*(b*1.0-2*a)-4*a*(a-b-c)))))/(Ld)(2*a*1.0);
if(a==0)
{
r1=0.00;r2=0.00;
}
if(r2>-1 && r2<1)
printf("Case #%lld: %.10Lf\n",T,r2);
else
printf("Case #%lld: %.10Lf\n",T,r1);
}
T++;
}
 
return 0;
}
