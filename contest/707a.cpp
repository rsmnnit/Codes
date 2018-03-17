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
void scint( int &x){
 int ng=0;
x=0;
register  int c=gc();
for(;(c<'0' || c>'9');c=gc());
if(c=='-')
ng=1;
for(;(c>='0' && c<='9');c=gc()){
		x=x*10+c-'0';
	}
	if(ng)
	x=-x;
}
void scint(long long int &x){
long long int ng=0;
x=0;
register long long int c=gc();
for(;(c<'0' || c>'9');c=gc());
if(c=='-')
ng=1;
for(;(c>='0' && c<='9');c=gc()){
		x=x*10+c-'0';
	}
	if(ng)
	x=-x;
}

/*----------------------------------------------------------------------------------------------------------------*/

int main()
{
 	int n,m,i,j,h[200]={0};
 	scanf("%d%d",&n,&m);
 	char ch;
 	for(i=0;i<n;i++)
 	f(j,0,m)
 	{
 		scanf("%c",&ch);
 		getchar();
 		h[ch]+=1;
 	}
 	if(h['C']==0 && h['M']==0 && h['Y']==0)
 	printf("#Black&White\n");
 	else printf("#Color\n");
 	
return 0;
}
