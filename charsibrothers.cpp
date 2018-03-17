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
ll sie[1000007];
map<ll,ll>mp;
vector<ll>primes;
ll po(ll b,ll e,ll n){
	ll an=1;
	while(e){
		if(e&1){
			an=(an*b)%n;
		}
		b=(b*b)%n;
		e>>=1;
	}
	return an;
}

bool miller(ll n,ll d){
	ll rd = 2+ rand()%(n-4);
	ll pp = po(rd,d,n);
	if(pp=1 || pp=n-1)
	return true;
	while(d!=n-1){
		d*=2;
		
	}
	
	
	
}
void sieve(){
	int i,j,k;
	for(i=2;i<=1000000;i++)
	{
		if(!sie[i]){
			sie[i]=1;
			primes.pb(i);
			for(j=i;j<=1000000;j+=i)
			sie[j]+=1;
		}
	}
	
}

int main()
{
 	sieve();
 	ll l,r,i,j,k,n;
 	double p;
 	cin>>l>>r>>p;
 	
 	for(ll pr=0;pr<primes.size();pr++){
 		ll st = l/primes[pr];
 		st=st*primes[pr];
 		if(st<l)
 		st+=primes[pr];
 		if(st>r)
 		continue;
 		while(st<=r){
 			ll tp =st;
 			while(tp%primes[pr]==0)
 			{
 			mp[st]+=1;
 			tp/=primes[pr];
 			}
 			st+=primes[pr];
 		}
 	
 	}
 	ll pri=0,npri=0,pris=0,npris=0;
 	for(i=l;i<=r;i++){
 		if(mp[i]<=1){
 			pri+=1;
 			pris+=1;
 		}
 		else{
 			npri+=1;
 			npris+=mp[i];
 		}
 	}
 	//cout<<npris<<" "<<pri<<endl;
 	double ann = p*1.0+(1-p)*(npris*1.0/npri);
 	cout<<fixed;
 	cout<<setprecision (6) << ann <<endl;
 	
return 0;
}
