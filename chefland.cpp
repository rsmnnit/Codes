#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define mp make_pair
ll n,i,j,k,h[100002]={0},e=0;
ll x,y;
vector<ll>v[100003];
vector<ll>::iterator it;
void dfs(ll w){//printf("fg\n");
if(e==0)
return;
	for(it=v[w].begin();it!=v[w].end();it++)
	{printf("%d \n",*it);
		v[w].erase(*it);
		v[*it].erase(w);
		
		h[w]++;
		h[*it]++;
		e-=2;
		dfs(*it);		
	}
	ll c=0;
	f(i,1,n+1)	
	if(h[i]<2)
	c++;
	
	if(c>2)
	printf("NO\n");
	else printf("YES\n");
	exit(0);
}
int main()
{
	
	sfd(n,k);
	
	f(i,0,k)
	{
		sfd(x,y);
		v[x].pb(y);
		v[y].pb(x);
		e+=2;
	}
	dfs(1);
	
return 0;
}
