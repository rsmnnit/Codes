#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll a[1001][1001],dp[1001][1001],maxr[1001][1001],maxc[1001][1001],dp2[1001][1001],cc[1001][1001];

int main()
{
	ll i,j,k,m,n,q,x,y,l;
	sfd(n,m);
	f(i,1,n+1)
	f(j,1,m+1)
	sf(a[i][j]);
	
	memset(dp,-1,sizeof dp);
	cin>>q;	
	while(q--)
	{
		sfd(x,y);//x rows y col
		if(dp[x][y]!=-1)
		pf(dp[x][y]);
		else{
		ll an=0,mx=-1,ans;
		ans=1000000000LL;
		if(x==1 &&y==1)
		ans=0;
		else
		f(i,1,n-x+2)
		{
			
			f(j,1,m-y+2)
			{
				mx=-1;an=0;
				f(k,i,i+x){
				ll an1=0,mx1=-1;
				f(l,j,j+y)
				{
				
					mx=max(mx,a[k][l]);
					mx1=max(mx1,a[k][l]);
					an+=a[k][l];
					an1+=a[k][l];
					if(dp[1][l-j+1]!=-1)
					dp[1][l-j+1]=mx1*(l-j+1)-an1;
					else dp[1][l-j+1]=min(dp[1][l-j+1],mx1*(l-j+1)-an1);
					
				}
				
				if(dp[k-i+1][y]!=-1)
				dp[k-i+1][y]=(k-i+1)*y*mx-an;
				else dp[k-i+1][y]=min(dp[k-i+1][y],(k-i+1)*y*mx-an);
				}
				ans=min(ans,mx*x*y-an);
			
			//printf("%lld %lldyo\n",ans,mx);
			
			}
		
		
		
		}
		dp[x][y]=ans;
		printf("%lld\n",ans);
		}
	}
return 0;
}
