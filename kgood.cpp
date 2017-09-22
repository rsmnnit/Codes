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
	char s[100009];
	ll i,j,h[500]={0},k,ha[100009]={0},n,dif=0;
	scanf("%s",s);
	sf(k);
	for(i=0;s[i]!='\0';i++)
	{
		if(!h[s[i]])
		dif++;
		h[s[i]]++;
	}
	for(i='a';i<='z';i++)
	{
		ha[h[i]]++;
	}
	ha[0]=0;
	for(i=1;i<=100000;i++)
	ha[i]=ha[i]+ha[i-1];
	ll mx=0;
	j=2;
	mx=ha[k];
	for(i=k+1;i<=100000;i++)
	{//printf("%lld h\n",i);
	mx=max(mx,ha[i]-ha[i-k-1]);
	}
	pf(strlen(s)-mx);
	
	
}
 
return 0;
}
