#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define inf (1<<29)
ll dp[1002][52][52];
int main()
{
	ll x,y,i,j,k,n,m,l;
	string s[53];
	cin>>n>>m>>k;
	f(i,0,n)
	cin>>s[i];
	f(i,0,n){
		f(j,0,m)
		if(s[i][j]=='*')
		{
			x=i;y=j;break;
		}
	}
	f(l,0,k+1){
		f(i,0,n){
			f(j,0,m)
			{
				if(l==0 &&i==0 &&j==0)dp[l][i][j]=0;
				else if(l==0) dp[l][i][j]=inf;
				else{
					ll tm= 1<<29;
					if(i>0)
					tm=min(tm,dp[l-1][i-1][j]+(s[i-1][j]=='D'?0:1));
					if(j>0)
					tm=min(tm,dp[l-1][i][j-1]+(s[i][j-1]=='R'?0:1));
					if(i<n-1)
					tm=min(tm,dp[l-1][i+1][j]+(s[i+1][j]=='U'?0:1));
					if(j<m-1)
					tm=min(tm,dp[l-1][i][j+1]+(s[i][j+1]=='L'?0:1));
					dp[l][i][j]=tm;
				}
			}
		}
	
	}
	ll an= (1<<29);
	f(i,0,k+1)
	an=min(an,dp[i][x][y]);
	if(an<(1<<29))
	cout<<an<<endl;
	else cout<<"-1"<<endl;
	
	
return 0;
}
