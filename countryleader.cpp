#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
ll t,T=1;
sf(t);

while(t--){
ll n,i,j;
sf(n);
n--;
char s[25];
getchar();
gets(s);
string an=s;
ll h[28]={0},c=0;
for(i=0;s[i]!='\0';i++)
{
	if(!h[s[i]-'A'])
	c++;
	h[s[i]-'A']++;
}
ll ans=c;
while(n--)
{c=0;
memset(h,0,sizeof h);
gets(s);
for(i=0;s[i]!='\0';i++)
{
	if(!h[s[i]-'A'])
	c++;
	h[s[i]-'A']++;
}//pf(c);
if(c>ans)
{
	ans=c;an=s;
}
else if(c==ans)
{
	an=s<an?s:an;
}
}
cout<<"Case #"<<T<<": "<<an<<endl;
T++;
}
 
return 0;
}
