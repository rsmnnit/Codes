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
char s1[100009],s2[100009],s[100009];
ll i,j,k,l,n,c=0;
scanf("%s%s",s1,s2);
l= strlen(s1);
for(i=0;i<l;i++)
{
if(s1[i]==s2[i])
{
	if(s1[i]=='W')
	s[i]='B';
	else
	s[i]='W';
}
else s[i]='B';
}
s[l]='\0';
printf("%s\n",s);
}
 
return 0;
}
