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

int main()
{
 	int n,i,j,k,h[5005],dp[5005][2]={0};
 	sfi(n);
 	f(i,0,n)
 	sfi(h[i]);
 	f(i,0,n){
 		for(j=i-1;j>=0;j--){
 			if(h[i]<h[j]){
 				dp[j][0]=max(dp[j][0],dp[i][1]+1);
 				
 			}
 			 if(h[i]>h[j])
 			dp[i][1]=max(dp[i][1],1+dp[j][0]);
 			
 		}
 	}
 	f(i,0,n)
 	printf("%d ",max(dp[i][0],dp[i][1]));
return 0;
}
