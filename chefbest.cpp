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
	set<pair<ll,ll> >v;
	set<pair<ll,ll> >::iterator it;
	ll i,j,k,n,m,an=0;
	ll a[100008];
	sfl(n);
	f(i,0,n)
	sfl(a[i]);
	f(i,1,n){
		if(a[i]==1 && a[i-1]==0)
		v.insert(MP(i-1,i));
	}
	while(v.size()){
		an++;
		set<pair<ll,ll> >p;
		for(it=v.begin();it!=v.end();it++)
		{
			//pfl(it->F);
			//pf("%d %d\n",it->F,it->S);
			a[it->F]=1;
			a[it->S]=0;
			if((it->S )<n-1 && a[it->S+1]==1)
			p.insert(MP(it->S,it->S+1));
			if((it->F)>0 && a[it->F-1]==0)
			p.insert(MP(it->F-1,it->F));
		}
		v.clear();
		v=p;
		p.clear();
	}
	pfl(an);
	v.clear();
	
}
 
return 0;
}
