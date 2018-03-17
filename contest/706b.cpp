#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%64Id",&i)
#define sfd(a,b) scanf("%64Id%64Id",&a,&b)
#define pf(a) printf("%64Id\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
	ll n,i,j,k,a[1000002]={0};
	sf(n);
	f(i,0,n){
	sf(k);
	a[k]+=1;
	}
	
	for(i=1;i<=1000000;i++)
	a[i]+=a[i-1];
	ll q;
	sf(q);
	while(q--)
	{
		ll p;
		sf(p);
		if(p>1000000)
		pf(a[1000000]);
		else pf(a[p]);
	}
return 0;
}
