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
int t;
//sfi(t);
t=1000000;
while(t--){
 	ll n,i,j,sq,ans=0;
 	//sfl(n);
 	n=t;
 	ans+=(ll)pow(n,0.5)-(ceil)(pow((n+1)/2,0.5))+1;
 	ans+=(ll)pow(n,0.3333333)-(ceil)(pow((n+1)/2,0.3333333))+1;
 	ans+=(ll)pow(n,0.25)-(ceil)(pow((n+1)/2,0.25))+1;
 	
 	
 	ll k=min(50LL,(ll)(ceil)(pow((n+1)/2,0.25)-1));
 	f(i,2,k+1){
 		j=i;
 		while(j<n){
 			j*=i;
 		}
 		if(j>n)j/=i;
 		if(n/j==1)ans++;
 	}
 	ans+=(n+1)/2;
 	if(n==0)
 	ans=0;
 	if(n==2)
 	ans=1;
 	if(n==1)
 	printf("INFINITY\n");
 	else pfl(ans);
}
 
return 0;
}
