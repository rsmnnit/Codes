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
#define maxx (1e9+7)
ll n,m;
string s[55];
ll dp[55][55];

ll sol(ll i,ll mask,ll an){

	ll ann=maxx;
	if(i==n||mask==7){
		if(mask==7)
		return an;
		else return maxx;
	}
	ll j;
	f(j,0,m){
	
		ll k=0;
		if(dp[i][j]!=-1)
		return dp[i][j];
		if(s[i][j]<='z' && s[i][j]>='a')
		k=1;
		else if(s[i][j]<='9' && s[i][j]>='0')
		k=2;
		else k=4;
		ll p1,p2;
		p1=sol(i+1,mask,an);
		mask|=k;
		an+=min(j,m-j);
		p2=sol(i+1,mask,an);
		//cout<<i<<" "<<j<<" "<<(mask|k)<<" "<<an<<endl;
		ann=dp[i][j]=min(ann,min(p2,p1));
		
		//pfl(ann);
	}
	
	return ann;
}
int main()
{
	ll i,j,k;
	sfld(n,m);
	f(i,0,55)
	f(j,0,55)
	dp[i][j]=-1;
	f(i,0,n){
		cin>>s[i];
	
	}
	ll ans;
	ans=sol(0,0,0);//ind,mask,an
	pfl(ans);
return 0;
}
