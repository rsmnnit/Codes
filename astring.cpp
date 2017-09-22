#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
int main()
{
ll t;
sf(t);
while(t--){
ll i,j,k,n,m;
char s[100001];
ll h[100001]={0};
scanf("%s%lld",s,&k);
ll l=strlen(s);
ll mn='z'+1;
ll id=-1;
for(i=0;i<=l-k;i++)
{
if(s[i]<mn)
{
mn=s[i];id=i;
}

}
ll c=0;
h[id]=1;
c++;
j=0;
while(j<k)
{
	for(i=id;i<l;i++)
	{
		if(s[i]==mn &&!h[i])
		{
			h[i]=1;j++;
		}
	}
	id++;
	mn+=1;
}
for(i=0;i<l;i++)
if(h[i])
printf("%c",s[i]);
printf("\n");
}
 
return 0;
}
