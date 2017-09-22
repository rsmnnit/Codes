#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
 ll n,i,j,c=0,k;
 sf(n);
 ll st=1;
 st=max(st,n-100);
 for(i=st;i<=n;i++)
 {
 	k=i;
 	ll a=0,b;
 	j=i;
 	while(j)
 	{
 		a+=j%10;
 		j/=10;
 	}
 	k+=a;b=0;
 	while(a)
 	{
 		b+=a%10;
 		a/=10;
 	}
 	k+=b;
 	if(k==n)
 	c++;
 }
 cout<<c<<endl;
return 0;
}
