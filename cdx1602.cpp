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
#define mod (1000000007)
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

/*-------------------------------------------------------------------*/
int n1,n2,k1,k2;
long long dp[102][102][11][11];
long long fun(int i,int j,int x,int y)
{
	
	if(i>=n1){
		if(x<=k1 && n2-j+y<=k2)
		return 1;
		else return 0;
	}
	else if(j>=n2){
		if(n1-i+x<=k1 && y<=k2)
		return 1;
		else return 0;
	}
	if(dp[i][j][x][y]!=-1)
	return dp[i][j][x][y];
	 if(x<k1 && y<k2)
	return dp[i][j][x][y]=(fun(i+1,j,x+1,0)%mod+fun(i,j+1,0,y+1)%mod)%mod;
	else if(x<k1)
	return dp[i][j][x][y]=fun(i+1,j,x+1,0)%mod;
	else if(y<k2)
	return dp[i][j][x][y]=fun(i,j+1,0,y+1)%mod;
	
	return 0;
}
int main()
{
int t;
scint(t);
while(t--){
	int i,j;
	memset(dp,-1,sizeof dp);
	scanf("%d%d%d%d",&n1,&n2,&k1,&k2);
	cout<<fun(0,0,0,0)%mod<<endl;
}
 
return 0;
}
