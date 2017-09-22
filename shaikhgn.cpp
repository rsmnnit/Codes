#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
set<ll>s;
vector<ll>v[501];
set<ll>::iterator it;
vector<ll>::iterator itt;
ll n,m,i,j,k,a[502][502],x,h[505]={0};
queue<ll>q;
void dfs(ll ver,ll ti,ll ft)
{
	//printf("%lld %lld %lld %lld\n",ver,ti,ft,s.size());
	s.insert(ver);	
	
	while( ti<ft)
	{
		
		it=s.begin();
		ll cr= *it;
		s.erase(cr);
		
		for(itt=v[cr].begin();itt!=v[cr].end();itt++)
		{
		s.insert(*itt);
		}
		ti+=1;
	}
	while(!q.empty())
	{
		s.insert(q.front());
		q.pop();
	}
	
}
int main()
{
	
	sf(n);
	
	f(i,0,n)
	f(j,0,n)
	{
		sf(a[i][j]);
		if(a[i][j])
		v[i].push_back(j);
	}
	sf(m);
	while(m--)
	{
		
		sfd(k,x);
		x--;
		dfs(x,0,k);
		if(s.size()){
		pf((ll)s.size());
		set<ll>::iterator ii;
		
		for(ii=s.begin();ii!=s.end();ii++)
		printf("%lld ",*ii+1);
		cout<<endl;
		}
		else printf("0\n-1\n");
		s.clear();
		memset(h,0,sizeof h);
	}
	
return 0;
}
