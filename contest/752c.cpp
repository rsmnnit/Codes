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
 int n,an=0,i,j,l=0,r=0,u=0,d=0;
 cin>>n;
 string s;
 cin>>s;
 if(s[0]=='L')
 l=1;
 else if(s[0]=='R')
 r=1;
 else if(s[0]=='U')
 u=1;
 else if(s[0]=='D')
 d=1;
 f(i,1,n){
 	if(s[i]!=s[i-1]){
 		if((s[i]=='R' && s[i-1]=='L') ||(s[i]=='L' && s[i-1]=='R'))
 		{
 			
 			an++;l=r=u=d=0;
 			if(s[i]=='R')
 			r=1;
 			else l=1;
 		}
 		else if((s[i]=='U' && s[i-1]=='D') ||(s[i]=='D' && s[i-1]=='U'))
 		{
 			an++;l=r=u=d=0;
 			if(s[i]=='U')
 			u=1;
 			else d=1;
 		}
 		else if(s[i]=='D' && u){
 			d=1;
 			an++;
 			l=r=u=0;
 		}
 		
 		else if(s[i]=='U' && d){
 			u=1;
 			an++;
 			l=r=d=0;
 		}
 		else if(s[i]=='L' && r){
 			l=1;
 			an++;
 			d=r=u=0;
 		}
 		else if(s[i]=='R' && l){
 			r=1;
 			an++;
 			l=d=u=0;
 		}
 		
 		else if(s[i]=='R')
 		r=1;
 		else if(s[i]=='U')
 		u=1;
 		else if(s[i]=='D')
 		d=1;
 		else if(s[i]=='L')
 		l=1;
 		
 	}
 	//cout<<an<<endl;
 }
 if(l||r||u||d)
 an+=1;
 if(an==0)
 an=1;
 cout<<an<<endl;
 
return 0;
}
