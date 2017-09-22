#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
ll t;
sf(t);
while(t--){
	ll n,i=1,j,k;
	char ch='a';
	cin>>n;
	while(n){
	i=1;
	while((i*(i+1))/2<=n)
	i++;
	i--;
	j=i;
	while(j--)
	printf("%c",ch);
	ch+=1;
	n=n-(i*(i+1))/2;
	
	}
	printf("\n");
}
 
return 0;
}
