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
bool check(string s,ll n,ll i,bool vis[],ll co){
	bool p1=false,p2=false,p3=false,p4=false;
	
	if(i>=n || i<0)
		return false;
		if( vis[i]==true)
		return false;
	if(s[i]=='1' && vis[i]==false){
		if(i==n-1 &&co==n)
			return true;
		vis[i]=true;
		return p1|= check(s,n,i-1,vis,co+1)|check(s,n,i+1,vis,co+1);
		//vis[i]=false;
	}
	if(s[i]=='2' && vis[i]==false){
		if(i==n-1&&co==n)
			return true;
		vis[i]=true;
		return p1|= check(s,n,i-2,vis,co+1)|check(s,n,i+2,vis,co+1);
		//vis[i]=false;
	}
	
	return false;
}
int main()
{
int t;
sfi(t);
while(t--){
 	string s1,s2;
 	ll i,j,k,po,n,f1=0,f2=0,ans=0;
 	cin>>s1>>s2;
 	n=s1.length();
 	po=pow(2,n);
 	for(i=0;i<po;i++){
 	f1=0;f2=0;
 		for(j=0;j<n;j++)
 		{
 			if(i& (1<<j)){
 				char tm=s1[j];
 				s1[j]=s2[j];
 				s2[j]=tm;
 			}
 		}
 		bool vis1[n+1],vis2[n+1];
 		memset(vis1,false,sizeof vis1);
 		memset(vis2,false,sizeof vis2);
 		
 		f1=check(s1,n,0,vis1,1);
 		f2=check(s2,n,0,vis2,1);
 		if(f1&&f2){
 		ans++;
 		}
 		ans%=1000000007;
 		for(j=0;j<n;j++)
 		{
 			if(i& (1<<j)){
 				char tm=s1[j];
 				s1[j]=s2[j];
 				s2[j]=tm;
 			}
 		}
 	}
 	pfl(ans);
}
 
return 0;
}
