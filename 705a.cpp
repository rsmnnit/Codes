#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
	char s[2][20]={"I hate that","I love that"};
 	char s2[2][20]={"I hate it","I love it"};
 	ll n,i=1;
 	cin>>n;
 	while(i<n)
 	{
 		if(i&1)
 		printf("%s ",s[0]);
 		else printf("%s ",s[1]);
 		i+=1;
 	}
 	if(n&1)
 	printf("%s\n",s2[0]);
 	else printf("%s\n",s2[1]);
 	
 	
return 0;
}
