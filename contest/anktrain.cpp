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

int main()
{
int t;
sfi(t);
while(t--){
 	int n,i,j;
 	sfi(n);
 	int m=n;
 	n%=8;
 	if(n==0)
 	printf("%dSL\n",m-1);
 	else if(n==7)
 	printf("%dSU\n",m+1);
 	else if(n==1)
 	printf("%dLB\n",m+3);
 	else if(n==4)
 	printf("%dLB\n",m-3);
 	else if(n==2)
 	printf("%dMB\n",m+3);
 	else if(n==5)
 	printf("%dMB\n",m-3);
 	else if(n==3)
 	printf("%dUB\n",m+3);
 	else if(n==6)
 	printf("%dUB\n",m-3);
 	
}
 
return 0;
}
