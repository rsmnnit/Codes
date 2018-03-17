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
string s1,s2;
ll ans=0;
ll solve(int i,int j){
	ll an=0;
	if(s1[i]=='\0')
	return 0;
	if(s2[j]=='\0')
	return 0;
	if((s1[i]=='R' || s1[i]=='B'||s1[i]=='G' )&&(s2[j]=='R' || s2[j]=='B'||s2[j]=='G' )){
	char p1=s1[i],p2=s2[j];
	s1[i]='A';s2[j]='B';
	if(s1[i]==s2[j]){
	
	return 1+solve(i+1,j+1);
	
	}
	else return 1+solve(i+1,j)+solve(i,j+1);
	s1[i]=p1;s2[j]=p2;
	}
}
int main()
{
 	cin>>s1>>s2;
 	ans=solve(0,0);
	pfl(ans);
return 0;
}
