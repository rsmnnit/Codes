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
 	int i,j,k,n,m,a[1000],l,h[1000]={0};
 	cin>>n>>m;
 	string s[n+2];
 	f(i,1,n+1)
 	cin>>s[i];
 	
 	f(i,0,m)
 	cin>>a[i],h[a[i]]=1;
 	l=s[a[0]].length();
 	int f=0;
 	f(i,0,m){
 		if(s[a[i]].length()!=l){
 		f=1;break;
 		}
 	}
 	//printf("%d\n",f);
	if(f){
		printf("No\n");
		return 0;
	}
	f(j,0,l){
		
 		f(i,1,m)
 		{
 			if(s[a[i]][j]!=s[a[0]][j])
 			{
 				s[a[0]][j]='?';
 				break;
 			}
 		}
 	}
 	for(i=1;i<=n;i++){
 	int c=0;
 		if(!h[i] && s[i].length()==l){
 		for(j=0;j<l;j++)
 		if(s[a[0]][j]!='?' && s[a[0]][j]==s[i][j])
 		{
 			//printf("%d %d\n",i,j);
 			c++;//break;
 		}
 		else if(s[a[0]][j]=='?')c++;
 		
 		if(c==s[i].length()){
 			f=1;break;
 		}
 		}
 	}
 	if(f){
		printf("No\n");
		return 0;
	}
	printf("Yes\n");
	cout<<s[a[0]]<<endl;
	
return 0;
}
