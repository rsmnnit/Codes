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
ll dp[200002][2];
int main()
{
 	ll pr=0,n,k,pd=-1,i,j,ans=mod,d,r,f=0;
 	cin>>n;
 	f(i,1,n+1){
 		sfld(dp[i][0],dp[i][1]);
 		
 	}
 	i=2;
 	
 	if(dp[1][1]==1)
 	ans=mod;
 	else ans=1899+dp[1][0];
 	
 	while(i<=n && dp[i][1]==dp[i-1][1])
 	i++;
 	if(i<=n){
 		if(dp[i][1]==1)
 		ans=1899+dp[i-1][0]+dp[i][0];
 		else if(dp[i][1]==2)
 		{
 			if(dp[i-1][0]>=0)
 			f=1;
 			else ans=1899+dp[i][0];
 		}
 	}
 	
 	j=i+1;
 	f(i,j,n+1){
 		if()
 	}
 	
 	if(f)
 	printf("Impossible\n");
 	else if(ans==mod)
 	printf("Infinity\n");
 	else pfl(ans);
return 0;
}
