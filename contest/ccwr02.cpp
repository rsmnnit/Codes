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
int t;
scint(t);
while(t--){
	int i,j,k,n,m,x,a[40009],b[40009];
	scint(x);
	scint(n);
	double y= x*1.0;
	f(i,0,n)
	{
		scint(a[i]);
	}
	f(i,0,n)
	{
		scint(b[i]);
	}
	f(i,0,n)
	{
		y+=y*((a[i]*1.0)/b[i]);
	}
	//y=y-x;
	int an=(100*(y-x))/y;
	printf("%d\n",an);
	
}	
return 0;
}
