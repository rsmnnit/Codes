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
	ll a[100001],i,j,k,n,f=0;
	cin>>n;
	f(i,0,n)
	sf(a[i]);
	f(i,0,n-2)
	{
		if(a[i]==a[i+1] &&a[i+1]==a[i+2])
		{
			f=1;break;
		}
		
	}
	if(f)
	printf("Yes\n");
	else
	printf("No\n");

}
 
return 0;
}
