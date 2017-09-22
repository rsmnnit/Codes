#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define mod 1000000007
ll p[100003];

int main()
{
ll t,i;
p[0]=1;
f(i,1,100001)
{
	p[i]=(p[i-1]*i)%mod;
}
sf(t);
while(t--){
char s[100006];
ll j,k,h[29]={0},c=0;
scanf("%s",s);
for(i=0;s[i]!='\0';i++)
{
	if(h[s[i]-'a']==0)
	c++;
	h[s[i]-'a']++;
}
ll ans=1;
for(i=0;i<26;i++)
ans=(ans*p[h[i]])%mod;
ans=(ans*p[c])%mod;
pf(ans);
}
 
return 0;
}
