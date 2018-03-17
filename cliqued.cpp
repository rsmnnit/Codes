			/* Radheshyam Lodhi
			radheshyamlodhi64@gmail.com
			CSE-MNNIT Allahabad */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sfi(i) scanf("%d",&i)
#define sfid(a,b) scanf("%d%d",&a,&b)
#define sfl(i) scanf("%lld",&i)
#define sfld(a,b) scanf("%lld%lld",&a,&b)
#define pfl(a) printf("%lld\n",a)
#define pfi(a) printf("%d\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define pf printf
#define sf scanf
#define gc() getchar_unlocked()
#define mod (1e9+7)
#define inf 1e18
ll dist[100006];
int main()
{
int t;
sfi(t);
while(t--){
 ll n,k,x,m,s,i,j,l;
 memset(dist,0,sizeof dist);
 sf("%lld%lld%lld%lld%lld",&n,&k,&x,&m,&s);
 f(i,1,k+1)
 dist[i]=inf;
 
 f(i,k+1,n+1)
 dist[i]=inf;
dist[s]=0;
 std::vector<pair<ll,ll> > v[n+2];


 f(i,0,m){
 	ll xx,yy,dd;
 	sfld(xx,yy);
 	sfl(dd);
 	v[xx].pb(MP(yy,dd));
 	v[yy].pb(MP(xx,dd));
 }
 set<pair<ll,ll> >st;
 st.insert(MP(0,s));
 while(st.size()>0){
 	ll w = st.begin()->F;
 	ll u = st.begin()->S;
 	st.erase(st.begin());
 	for(i=0;i<v[u].size();i++){
 		if(w+v[u][i].S<dist[v[u][i].F]){
 			dist[v[u][i].F]=w+v[u][i].S;
 			st.insert(MP(dist[v[u][i].F],v[u][i].F));
 		}
 	}
 }
 ll mn =inf,ii=-1;
 for(i=1;i<=k;i++){
 	if(dist[i]<mn){
 		mn=dist[i];ii=i;

 	}
 }
 


for(i=1;i<=k;i++){
//pf("%lld %lld\n",i,ii);
			v[ii].pb(MP(i,x));
			v[i].pb(MP(ii,x));

}
f(i,1,n+1)
 dist[i]=inf;
dist[s]=0;
st.insert(MP(0,s));
 while(st.size()>0){
 	ll w = st.begin()->F;
 	ll u = st.begin()->S;
 	st.erase(st.begin());
 	for(i=0;i<v[u].size();i++){
 		if(w+v[u][i].S<dist[v[u][i].F]){
 			dist[v[u][i].F]=w+v[u][i].S;
 			st.insert(MP(dist[v[u][i].F],v[u][i].F));
 		}
 	}
 }
 for(i=1;i<=n;i++){
 	pf("%lld ",dist[i]);
 }
 pf("\n");
}
 
return 0;
}
