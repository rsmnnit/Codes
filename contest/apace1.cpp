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
int T=1;
while(t--){
 	string s;
 	int i,j,x,y;
 	int a[102]={0};
 	cin>>s;
 	sfid(x,y);
 	for(i=0;s[i]!='\0';i++){
 		if(s[i]=='B')
 		{
 			a[i+1]=a[i]+1;
 			
 		}
 		else a[i+1]=a[i];
 	}
 	ll ans=0,n=s.length();
 	while(x<=y)
 	{
 		if(x%n==0)
 		ans+=s[n-1]=='B'?1:0;
 		else ans+=s[x%n-1]=='B'?1:0;
 		x++;
 	}
 	
 	printf("Case #%d: %lld\n",T++,ans);
 	
}
 
return 0;
}
