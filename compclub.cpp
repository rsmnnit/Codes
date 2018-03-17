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
#define mod (long)(1e9+7)
struct tree{
	std::vector<ll> v;
	map<ll,ll>mp;
	ll ans =0;
};
tree st[500003]; 	
ll level[500003];
ll club[500003];
map<ll,ll> merge(map<ll,ll>&m1,map<ll,ll>&m2){
	map<ll,ll>::iterator it;
	for(it = m1.begin();it!=m1.end();it++){
		m2[it->F]+=it->S;
	}
	return m2;
}
tree dfs(ll node, ll cl, tree T[]){

	ll i,j,k;
	if(st[node].v.size()==0){
		T[node].ans = 0;
		if(level[node]==0){
			T[node].ans = 1;
			//pfl(node);

		}
		T[node].mp[level[node]]++;
			//pf("g\n");
		pf("%lld %lld %lld\n",node,T[node].ans,T[node].mp[level[node]]);
			return T[node];
	}
	else
	for(i=0;i<st[node].v.size();i++){
		if(club[st[node].v[i]]==cl){
			tree temp = dfs(st[node].v[i],cl,T);
			T[node].ans+=temp.mp[level[node]]+temp.mp[level[node]-1];
			T[node].mp = merge(T[node].mp,temp.mp);
			pf("%lld %lld %lld--\n",st[node].v[i],T[st[node].v[i]].ans,T[st[node].v[i]].mp[level[node]]);
		}
	}
	pf("%lld %lld\n",node,T[node].ans);
	return T[node];
}

int main()
{
int t;
sfi(t);
while(t--){
 	ll n,m,i,j,k,x;
 	sfld(n,x);

 	f(i,1,n){
 		sfl(k);
 		st[k].v.pb(i);
 	}
 	f(i,0,n){
 		sfl(club[i]);

 	}
 	f(i,0,n){
 		sfl(level[i]);
 	}
 	f(i,0,n){
 		tree T[n+1];
 		pfl(dfs(i,club[i],T).ans);

 	}
}
 
return 0;
}
