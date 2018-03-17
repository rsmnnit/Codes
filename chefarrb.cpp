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
#define gc() getchar_unlocked()
#define mod (1e9+7)
ll dp[100004][34];
int main()
{
int t;
sfi(t);
while(t--){
	ll n,i,j,k,a[100003];
	sfld(n,k);
	f(i,1,n+1)
		sfl(a[i]);
	f(i,1,n+1){
		
			ll m=a[i];
			f(j,1,34)
				{
					
					dp[i][j]=(m&1);
					
					m>>=1;
				}
		
	}
	f(i,1,n+1){
		f(j,1,34){
			dp[i][j]+=dp[i-1][j];
		}
	}
	f(j,1,34){
			dp[0][j]=0;
			
	}
	ll L=1,R=1,ans=0;
	while(R<=n){
		ll nu=0;
		f(i,1,34){
			if(dp[R][i]>0)
			nu+=(1<<(i-1));
		}
		if(nu>=k)
		break;
		R++;
	}
	while(R<=n){
		while( L<=n){
		ll nu=0;
		f(i,1,34){
			if(dp[R][i]-dp[L-1][i]>0)
			nu+=(1<<(i-1));
		}
		//printf("%lld %lld %lld--\n",nu,L,R);
		if(nu>=k)
		L++;
		else{
			L--;
			break;
		}
		}
		ans+=min(L,n);
		//printf("%lld %lld %lld\n",L,R,ans);
		R++;
	}
	pfl(ans);
}
 
return 0;
}
