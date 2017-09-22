#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
	ll q,x,y,i,j,k,u,v,w;
	sfd(x,y);
	sf(q);
	q--;
	sfd(u,v);
	sf(w);
	 double ans=(double)(((double)sqrt((u-x)*(u-x)+(v-y)*(v-y)))/(w*1.0));
	// printf("%.20lf\n",ans);
	while(q--)
	{
		sfd(u,v);
		sf(w);
		ans=min(ans,(double)((( double)sqrt((u-x)*(u-x)+(v-y)*(v-y)))/(w*1.0)));
		//printf("%.20lf\n",ans);
	}
	//cout<<setprecision(15)<<(long double)ans<<endl;
	printf("%.20lf\n",ans);
	
return 0;
}
