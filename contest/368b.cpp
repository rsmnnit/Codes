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
 	ll n,m,a[100005],b[100005],i,j,k;
 	sfld(n,m);
 	ll an[100005],h[100005]={0};
 	f(i,0,n)
 	{
 		sfl(a[i]);
 	}
 	an[n-1]=1;
 	h[a[n-1]]=1;
 	for(i=n-2;i>=0;i--){
 		if(!h[a[i]])
 		an[i]=1+an[i+1];
 		else an[i]=an[i+1];
 		h[a[i]]=1;
 	}
 	while(m--){
 		sfl(k);
 		pfl(an[k-1]);
 	}
 	
 	
 	
return 0;
}
