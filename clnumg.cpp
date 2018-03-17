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
char s[65][100];
int main()
{
int t,i,j,k;

s[0][0]='1';
s[0][1]='\0';
f(i,1,62)
{
	ll c=0;
	for(j=0;s[i-1][j]!='\0';j++)
	{
		s[i][j]='0'+((s[i-1][j]-'0')*2+c)%10;
		c=((s[i-1][j]-'0')*2+c)/10;
	}
	while(c){
	s[i][j++]='0'+c%10;
	c/=10;
	}
	s[i][j]='\0';
	//pf("%s\n",s[i]);
}
sfi(t);
while(t--){
 	ll n,m,z=0;
 	char ch[100];
 	i=0;
 	sfld(n,m);
 	n-=1;
 	ll c=0;
 	k=0;
 	if(n>0)
 	while(s[n-1][i]!='\0')
 	{
 		
 		ll tp=0;
 		f(j,k,n){
 			if(s[j][i]!='\0')
 			tp+=s[j][i]-'0';
 			else k++;
 		}
 		tp+=s[m+n][i]-'0' +c;
 		c=tp/10;
 		ch[i]=(tp%10) +'0';
 		i++;
 		//pf("%c",ch[i-1]);
 	}
 	while(s[m+n][i]!='\0'){
 		ll tp = s[m+n][i]-'0'+c;
 		c=tp/10;
 		ch[i]=(tp%10)+ '0';
 		i++;
 	}
 	for(j=i-1;j>=0;j--)
 	pf("%c",ch[j]);
 	pf("\n");
 	
}
 
return 0;
}
