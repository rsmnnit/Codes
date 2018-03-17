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
ll sie[1000006],a[1000006];
vector<ll>pr;
std::vector<map<ll,ll> > v[100008];
std::vector<map<ll,ll> >::iterator itt;
int main()
{

ll x,y,i,j,k;
pr.pb(2);
 for(i=3;i<=1000000;i+=2){
 	if(!sie[i]){
 		pr.pb(i);
 		for(j=i+i;j<=1000000;j+=i)
 			sie[j]=1;
 	}
 }
 sfld(x,y);
for(i=0;i<pr.size() && pr[i]<=y;i++){
	ll p =pr[i];
	ll st = (x/pr[i])*pr[i];
	if(st<x) st+=p;
	while(st<=y){
		map<ll,ll>mp;
		ll tp = st;
		ll cc=0;
		while(tp%p==0){
			cc++;tp/=p;
		}
		itt = v[st-x].begin();
		if(itt!=v[st-x].end())
		mp = *itt;
		mp[p]+=cc;
		v[st-x].clear();
		//pf("%lld %lld\n",st,mp.size());
		v[st-x].pb(mp);
		
		st+=p;
	}
}
ll ans = 0;
for(i=0;i<=y-x;i++){
	map<ll,ll>mp;
	map<ll,ll>::iterator it;
	if(v[i].begin()==v[i].end())
		{
			mp[1]=1;
			v[i].pb(mp);
		}
	mp = *v[i].begin();
	//pfl(mp.size());
	priority_queue<ll>pq;
	ll val = 1;
	ll tot=0;
	for(it=mp.begin();it!=mp.end();it++){
		pq.push(it->S);
		//pfl(it->S);
		val = val*(it->S +1);
	}
	tot = val-1;
	//pf("%lld %lld\n",i+x,tot);
	while(!pq.empty()){
		ll to = pq.top();
		pq.pop();
		//pf("f %lld\n",to);
		val/=(to+1);
		to--;
		if(to)
		{	
			pq.push(to);
			tot += val*(to+1);
			val*=(to+1);
		}
		else tot+=val;
		
		//pf("%lld %lld\n",i+x,tot);
	}
	ans +=tot;
//pfl(tot);
}
if(x==1)ans-=2;
pfl(ans);

return 0;
}
