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
bool isperfect(double n,ll m){
	if(n*n*n==(ll)m)
	return true;
	return false;
}
int main()
{
int t;
sfi(t);
while(t--){
 	ll n,i,j,sq,ans=0;
 	sfl(n);
 	if(n>100){
 	ans+=(ll)pow(n,0.5)-(ll)(pow((n+1)/2,0.5));
 	
 	if(n%2)
 	{
 		sq = sqrt((n+1)/2);
 		if(sq*sq==((n+1)/2))
 		ans++;
 	}
 	
 	ans+=(ll)pow(n,0.3333333)-(ll)(pow((n+1)/2,0.3333333));
 	if(isperfect((ceil)(pow((n+1),0.3333333)),(n+1)/2))
 	ans++;
 	/*
 	
 	if(n%2==0 && isperfect((ceil)(pow((n/2),0.3333333)),n/2))
 	ans--;
 	*/
 	
 	
 	
 	/*
 	ans+=(ll)pow(n,0.25)-(ll)(pow((n+1)/2,0.25));
 	if(isperfect(pow((n+1)/2,0.25)))
 	ans++;
 	*/
 	
 	sq=(ll)pow((n),0.25)+1;
 	//pfl(sq);
 	f(i,2,sq+1){
 		j=i;
 		while(j<n){
 			j*=i;
 		}
 		if(j>n)
 		j/=i;
 		if(n/j==1)
 		ans++;
 	}
 	ans+=(n+1)/2;
 	}
 	if(n<=100)
 	{
 	ans=0;
 	f(i,2,n+1){
 		j=i;
 		while(j<n){
 			j*=i;
 		}
 		if(j>n)
 		j/=i;
 		if(n/j==1)
 		ans++;
 	}
 	}
 	if(n==0)
 	ans=0;
 	
 	
 	if(n==1)
 	printf("INFINITY\n");
 	else pfl(ans);
}
 
return 0;
}  
