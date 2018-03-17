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

int main()
{
int t;
sfi(t);
while(t--){
 	vector<pair<ll,ll> >v;
 	vector<pair<ll,ll> >::iterator it;
 	ll i,j,k,n;
 	map<ll,set<ll> >mp;
 	sfl(n);
 	f(i,1,n+1){
 		ll x;
 		sfl(x);
 		v.pb(MP(x,i));
 	}
 	ll x,y;
 	f(i,1,n){
 		sfld(x,y);
 		mp[y].insert(x);
 		mp[x].insert(y);
 	}
 	
 	sort(v.rbegin(),v.rend());
 	//pfl(v[0].S);
 	ll ans=0;
 	f(i,1,n+1){
 		ans=0;
 		for(it=v.begin();it!=v.end();it++){
 		if(mp[i].find(it->S)==mp[i].end() && (it->S)!=i){
 			//pfl(it->S);
 			ans=it->S;
 			break;
 		}
 		}
 		pf("%lld ",ans);
 	}
 	pf("\n");
}
 
return 0;
}
