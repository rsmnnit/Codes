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
ll mp[10000009]={0};
int main()
{
 	ll n,m,i,j,k;
 	cin>>n>>m;
 	f(i,0,n){
 	cin>>j;
 	mp[j]+=1;
 	}
 	ll cnt=n;
 	for(i=10000000;i>1;i--){
 		if(cnt>=m)
 		break;
 		cnt+=mp[i];
 		
 		mp[i/2]+=mp[i];
 		mp[(i+1)/2]+=mp[i];
 		mp[i]=0;
 		
 		
 	}
 	//pfl(cnt);
 	if(cnt>=m)
 	{
 		ll cn=0;
 		for(i=10000000;i>0;i--){
 		
 		cn+=mp[i];
 		if(cn>=m)
 		{
 			pfl(i);
 			return 0;
 		}
 		}
 	}
 	else printf("-1\n");
return 0;
}
