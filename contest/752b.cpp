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
 string s,t;
 cin>>s>>t;
 int i,j,k,f=0;
 int st[130]={0};
 memset(st,-1,sizeof st);
 set<int>::iterator it;
 int sz=s.length();
 f(i,0,sz)
 {
 	if(s[i]!=t[i])
 	{
 		if(s[i]<t[i]){
 		
 		if(st[int(s[i])]==-1){
 		
 		if(st[int(t[i])]!=-1){
 		f=1;break;
 		}
 		
 		st[int(s[i])]=int(t[i]);
 		st[int(t[i])]=int(s[i]);}
 		else if(st[int(s[i])]!=int(t[i]) ||st[int(t[i])]!=int(s[i])){
 		f=1;break;
 		}
 		}
 		else{ if(st[int(t[i])]==-1){
 		
 		if(st[int(s[i])]!=-1){
 		f=1;break;
 		}
 		st[int(t[i])]=int(s[i]);
 		st[int(s[i])]=int(t[i]);
 		}
 		else if(st[int(t[i])]!=int(s[i]) || st[int(s[i])]!=int(t[i])){
 		f=1;break;
 		}
 		}
 	}
 	else {
 		if((st[int(t[i])]!=-1)&&(st[int(t[i])]!=int(t[i])))
 		{f=1;
 		break;}
 		
 		st[int(t[i])]=int(s[i]);
 		st[int(s[i])]=int(t[i]);
 	
 	}
 }
 if(f==1)
 cout<<"-1"<<endl;
 else {
 	int co=0;
 	
 	f(i,0,130)
 	if(st[i]!=-1){
 	if(st[i]>i)
 	co++;
 	
 	//printf("%c ",st[i]);
 	}
 	cout<<co<<endl;
 	f(i,0,130){
 	if(st[i]!=-1 && st[i]>i){
 	printf("%c %c\n",i,st[i]);
 	
 	}
 	}
 	
 }
 
return 0;
}
