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
ll n,a[105],b[105],c[105];
ll dp[105][105];
ll ans=1e18;
ll tot;
ll solve(ll k,ll i,ll cnt,ll an){
	ll j;
	//pf("i %lld\n",i);
	if(i>=n){
		return 1e18;
	}
	if(i==n-1 && cnt==k){
		ans=min(ans,tot-an);
		return ans;
	}
	else{
		return min(solve(k,i+1,cnt+1,an+a[i]),solve(k,i+1,cnt,an));
		
	}
	return ans;
}

int main()
{
	ll i,j,k,cur=0;
	sfl(n);
	f(i,0,n){
	
		sfl(a[i]);
		cur+=a[i];
	
	}
	tot=cur;
	f(i,0,n){
		sfl(b[i]);
		c[i]=b[i];
	}
	sort(c,c+n);
	ll su=0,mn=0;
	for(i=n-1;i>=0;i--){
		su+=c[i];
		mn++;
		if(su>=cur)
		break;
	}
	ll ann=solve(mn,0,0,0);
	pf("%lld %lld\n",mn,ann);
	
return 0;
}
