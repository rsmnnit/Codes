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
int t;
sfi(t);
while(t--){
 string s;
 int i,c=0,ss=0,e=0,f=0;
 cin>>s;
 f(i,0,s.length()){
 	if(s[i]=='C' && (e||ss)){
 		f=1;
 	}
 	if(s[i]=='E' && (ss))
 		f=1;
 	if(s[i]=='C')c=1;
 	if(s[i]=='E')e=1;
 	if(s[i]=='S')ss=1;
 }
 if(f)
 	pf("no\n");
 else pf("yes\n");
}
 
return 0;
}
