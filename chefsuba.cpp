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
ll a[1000000],h[2000000]={0};
struct comp{
bool operator()(const ll& l,const ll& r) const{
	return l>r;
}
};
int main()
{
 	ll n,k,p,i,j,l;
 	sf("%lld%lld%lld",&n,&k,&p);
 	f(i,0,n)
 	sfl(a[i]);
 	string s;
 	cin>>s;
 	ll f = 0,pr=0,fi=0,la=n-1,fa,lan,ans=0,mf=0,ms=0,cs[1000000];
 	cs[0]=a[0];
 	f(i,1,k){
 		cs[i]=a[i]+cs[i-1];
 	}
 	fa = cs[k-1];
 	mf = fa;
 	f=1;
 	f(i,k,n){
 		cs[i]=cs[i-1]+a[i];
 		
 		lan = cs[i]-cs[i-k];
 		if(lan>ms)ms=lan;
 		if(lan>=mf){
 			ms = mf;
 			mf = lan;
 		}
 	}
 	ans = mf;
 	f(i,0,s.length()){
 		if(s[i]=='?'){
 			pfl(ans);
 		}
 		else{
 			fi=(fi-1+n)%n;
 			ll pp = lan;
 			lan = lan -a[la]+ a[(la-k+n)%n];
 			la = (la-1+n)%n;
 			fa = fa - a[(fi+k)%n]+a[fi];
 			if(pp==mf && h[mf]==1) 
 			ans = max(fa,max(ms,lan));
 			else ans = max(max(mf,fa),max(ms,lan));
 		}
 	}
return 0;
}
