#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
 ll m,n,i,j,k,f;
 char s[10000];
 m=0;
 sf(n);
 getchar();
 f(i,0,n){m=0;
 f=0;
gets(s);
 for(j=0;s[j]!='\0';j++)
 {
 	if(s[j]=='$')
 	{
 		f=1;
 	}
 	else if(f &&((s[j]>='0'&&s[j]<='9')||s[j]==' '))
 	{if(s[j]!=' ')
 		m=m*10+s[j]-'0';
 	
 	}
 	else if(f &&!((s[j]>='0'&&s[j]<='9')||s[j]==' '))
	f=0;
 
 }
 printf("$%lld\n",m);
 }
return 0;
}
