#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
int main()
{
ll i,j,k,ans[100009];
ans[1]=ans[2]=1;
for(i=3;i<=100000;i++)
{
ll s=0,an=0,tm=i;
while(tm%2==0)
tm/=2;

	for(j=3;j<=sqrt(tm);j+=2)
	{
		if(tm%j==0)
		{
			
			s=an*j+j;
			an+=s;
			tm/=j;
			//printf("%lld %lld\n",an,s);
			while(tm%j==0)
			{
				s=s*j;
				an+=s;
				tm/=j;
				//printf("%lld %lld\n",an,s);
			}
		}
	
	}
	//printf("%lld\n",tm);
	if(tm&1 && tm!=1)
	{
		
		an=an+an*tm+tm;
	}
	ans[i]=an+1;
	
//printf("%lld\n\n",ans[i]);
}
for(i=2;i<=100000;i++)
ans[i]=ans[i]+ans[i-1];
ans[0]=0;
ll t;

sf(t);
while(t--){
ll le,ri;
sf(le);
sf(ri);
printf("%lld\n",ans[ri]-ans[le-1]);


}

return 0;
}
