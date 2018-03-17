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
sfi(t);
while(t--){
 	map<ll,int>mp;
 	map<ll,int>::iterator it;
 	int m,n,k,i,j,ans=1000009;
 	//ll ans=0;
 	sfid(n,k);
 	f(i,0,n)
 	{
 		sfi(m);
 		mp[m]+=1;
 	}
 	int tot=0;
 	for(it=mp.begin();it!=mp.end();it++){
 		if(n-tot>=k){
 			ans=min(ans,k-it->S);
 		}
 	}
 	if(ans<0)ans=0;
 	pfi(ans);
}
 
return 0;
}
