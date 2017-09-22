#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
int main()
{
ll t;
sf(t);
while(t--){
	ll n,i,j,k,r=0,s=0,x,y,a[1000],b[1000],an=0;
	sf(n);
	for(i=0;i<n;i++)
		sf(a[i]);
	for(i=0;i<n;i++)
		sf(b[i]);
		for(i=0;i<n;i++)
		{
			if(a[i]*b[i]>s)
			{
				s=a[i]*b[i];
				an=i;
				r=b[i];
			}
			else if(a[i]*b[i]==s)
			{
				if(b[i]>r)
				{
					r=b[i];an=i;
				}
			}
		
		}
		printf("%lld\n",an+1);

}
 
return 0;
}
