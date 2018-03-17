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
ll sie[31625]={0};
ll po(ll b,ll e){
	ll an=1;
	while(e){
		if(e&1) an=(an*b)%mod;
		b=(b*b)%mod;
		e>>=1;
	}
	return an;
}

int main()
{
 ll n,i,j,k,a[5005];
 sfl(n);
 f(i,0,n)sfl(a[i]);

 map<ll,ll>mp;
 std::vector<ll> prime;
 map<ll,ll>::iterator it;
prime.pb(2);
for(i=3;i<31626;i+=2){
	if(!sie[i]){
		prime.pb(i);
		for(j=i+i;j<31626;j+=i){
			sie[j]=1;
		}
	}
}
//pf("here\n");
ll p = prime.size();
f(i,0,n){
	//pfl(i);
	f(j,0,p){
		while(a[i]%prime[j]==0){
			mp[prime[j]]++;
			a[i]/=prime[j];
		}
		if(a[i]==1)break;

	}
	if(a[i]>1)mp[a[i]]++;
}
ll f=0;
for(it=mp.begin();it!=mp.end();it++){
	if((it->S)%n!=0){
		f=1;break;
	}
}
if(f){
	ll num = 1;
	for(it=mp.begin();it!=mp.end();it++){
		ll val = it->S;
		val%=(n+1);
		if(val){
			num=num*(po(it->F,n+1-val));
			num%=mod;
		}
	}
	pfl(num);
}
else pf("justdoit\n");
return 0;
}
