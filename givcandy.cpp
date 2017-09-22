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
	ll a,b,c,d,e=1;
	cin>>a>>b>>c>>d;
	if(c==d)
	printf("%lld\n",min(abs(a-b),e));
 	else printf("0\n");
}
 
return 0;
}
