#include<bits/stdc++.h>
using namespace std;
#define ll int
#define sf(i) scanf("%64Id",&i)
#define sfd(a,b) scanf("%64Id%64Id",&a,&b)
#define pf(a) printf("%64Id\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
	ll n,i,j,k;
	ll an=0;
	sf(n);
	sf(k);
	if(k&1)
	an=2;
	else an=1;
	pf(an);
	f(i,1,n)
	{
		sf(k);
		if(k%2==0){
		if(an==2)
		an=1;
		else an=2;}
		pf(an);
	}
	
return 0;
}
