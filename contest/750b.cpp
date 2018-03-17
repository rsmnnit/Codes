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
 	ll n,i,j,k,f=0,ans=0,x=0,y=0;
 	cin>>n;
 	f(i,0,n){
 		string s;
 		cin>>k>>s;
 		if(s[0]=='S')
 		{
 			
 			x+=k;
 			
 		}
 		else if(s[0]=='N')
 		x-=k;
 		else if(s[0]=='E')
 		{if(x==20000)
 		f=1;
 		y+=k;}
 		else {if(x==20000)
 		f=1;
 		y-=k;}
 		if(x>20000||x<0)
 		f=1;
 		
 	}
 	if(f||x!=0)
 	cout<<"NO"<<endl;
 	else cout<<"YES"<<endl;
 	
 	
return 0;
}
