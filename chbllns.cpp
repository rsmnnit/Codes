#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long r,g,b,i,an=0,k;
		scanf("%lld%lld%lld%lld",&r,&g,&b,&k);	
		if(k-1>r)
		an+=r;
		else an+=k-1;
		if(k-1>g)
		an+=g;
		else an+=k-1;
		if(k-1>b)
		an+=b;
		else an+=k-1;
		an+=1;
		printf("%lld\n",an);
	}
return 0;
}
