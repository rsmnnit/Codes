#include<bits/stdc++.h>
using namespace std;
vector<pair<int,int> >v[100009];
long long ann=0;
long long an[100009]={0};
void dfs(long long ans[],bool vis[],int x,long long anns)
{
printf("%lld %dann\n",anns,x);
	vector<pair<int,int> >::iterator it;
	for(it=v[x].begin();it!=v[x].end();it++)
	{
		if(!vis[it->first])
		{
			vis[it->first]=true;
			anns+=it->second;
			
			//ans[it->first]=ans[x]+it->second;
			dfs(ans,vis,it->first,0);
		}
		if(ans[x])
		ans[x]=min(ans[x],anns);
		else ans[x]=anns;
	}

}

void dfs2(long long ans[],bool vis[],int x)
{
	vector<pair<int,int> >::iterator it;
	for(it=v[x].begin();it!=v[x].end();it++)
	{
		if(!vis[it->first])
		{
			vis[it->first]=true;
			dfs2(ans,vis,it->first);
		vector<pair<int,int> >::iterator itt;
		for(itt=v[x].begin();itt!=v[x].end();itt++)
		{
			an[x]=max(an[x],-ans[x]+ans[itt->first]+an[itt->first]);
		}
		}
	}

}
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,i,j,k,x,y,w;
		int par[100009][3];
		scanf("%d",&n);
		long long ans[100009];
		bool vis[n+1];
		memset(vis,0,sizeof vis);
		memset(ans,0,sizeof ans);
		memset(v,0,sizeof v);
		memset(an,0,sizeof an);
		for(i=1;i<n;i++)
		{
			scanf("%d%d%d",&x,&y,&w);
			v[x].push_back(make_pair(y,w));
			v[y].push_back(make_pair(x,w));
			par[y][0]=x;
			par[y][1]=w;
		}
		for(i=1;i<=n;i++)
		{
			
			ann=0;
			dfs(ans,vis,1,0);
		//	ans[i]=ann;
			memset(vis,0,sizeof vis);
			
		}
		for(i=1;i<=n;i++)
		printf("%lld\n",ans[i]);
		memset(vis,0,sizeof vis);
		dfs2(ans,vis,1);
		
		for(i=1;i<=n;i++)
		printf("%lld\n",an[i]);
		memset(v,0,sizeof v);
		memset(an,0,sizeof an);
		printf("\n");
	}
return 0;
}
