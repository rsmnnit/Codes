#include<bits/stdc++.h>
using namespace std;
struct st{
int u,v;
long long l;
}a[100002];
long long int h[100003]={0},an[1000003];
int main(){
	 long int n,m,i,j,k,l,u,v,ar[100003];
	scanf("%ld%ld%ld",&n,&m,&k);
	for(i=0;i<m;i++){
	scanf("%d%d%lld",&a[i].u,&a[i].v,&a[i].l);
	
	}
	for(i=0;i<=n;i++)
	an[i]=1000000001;
	for(i=0;i<k;i++)
	{
		scanf("%ld",&u);
		ar[i]=u;
		h[u]=1;
	}
	for(i=0;i<m;i++)
	{
		if(h[a[i].u])
		{
			if(h[a[i].v]==0)
			{
				an[a[i].u]=min(an[a[i].u],a[i].l);
			}
		}
		if(h[a[i].v])
		{
			if(h[a[i].u]==0)
			{
				an[a[i].v]=min(an[a[i].v],a[i].l);
			}
		}
	}
	long long ans=1000000001;
	for(i=0;i<k;i++)
	{
		ans=min(ans,an[ar[i]]);
	}
	if(ans<1000000001)
	printf("%lld\n",ans);
	else printf("-1\n");
return 0;
}
