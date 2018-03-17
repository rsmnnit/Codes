/*  Radheshyam Lodhi
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
ll a[1000000];
struct comp{
bool operator()(const ll& l,const ll& r) const{
	return l>r;
}
};
int main()
{
 	ll n,k,p,i,j,l;
 	sf("%lld%lld%lld",&n,&k,&p);
 	f(i,0,n){
 	sfl(a[i]);
 	}
 	string s;
 	cin>>s;
 	multiset<ll,comp> ms;
 	multiset<ll,comp>::iterator it;
 	ll f = 0,pr=0,fi=0,la=n-1,fa,lan,cs[1000000];
 	cs[0]=a[0];
 	f(i,1,min(n,k)){
 	cs[i]=a[i]+cs[i-1];
 	}
 	ms.insert(cs[min(k,n)-1]);
 	fa = cs[min(k,n)-1];
 	lan =fa;
 	f=1;
 	f(i,k,n){
 		cs[i]=cs[i-1]+a[i];
 		ms.insert(cs[i]-cs[i-k]);
 		lan = cs[i]-cs[i-k];
 	}
 	f(i,0,s.length()){
 		if(s[i]=='?'){
 		pfl(*(ms.begin()));
 		}
 		else{
 		if(k>=n)continue;
 			fi=(fi-1+n)%n;
 			it = ms.find(lan);
 			if(it!=ms.end())
 			ms.erase(it);
 			lan = lan -a[la]+ a[(la-k+n)%n];
 			la = (la-1+n)%n;
 			fa = fa - a[(fi+k)%n]+a[fi];
 			ms.insert(fa);
 		}
 	}
 	
 
 
return 0;
}
