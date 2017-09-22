#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define marker 11111
ll ma[102][102];
queue<ll >q;
ll max(ll a,ll b)
{
return a>b?a:b;
}
void bfs(ll n,ll m,ll a[102][102],ll range,ll step,ll an1[102][102])
{
	ll x,y;
	while(!q.empty()){
		ll temp = q.front();
		q.pop();
		x=temp/100;y=temp%100;
		ll i,j,sti,endi,stj,endj;
		sti=max(0,x-range);
		endi=min(n-1,x+range);
		stj=max(0,y-range);
		endj=min(m-1,y+range);
		for(i=sti;i<=endi;i++)
		{
			for(j=stj;j<=endj;j++)
			{
				if(!a[i][j] && ma[i][j]!=1 && ((abs(x-i)+abs(y-j))<=range) )
				{
					q.push(i*100+j);
					
					an1[i][j]=an1[x][y]+1;
					//printf("%lld %lld %lld %lld i j step ma[i][j]\n",i,j,step,ma[i][j]);
					ma[i][j]=1;
				}
				else if(ma[i][j]==1)
				{
					an1[i][j]=min(an1[i][j],an1[x][y]+1);
				}
				
			}
		
		}
		step++;
	}
}
int main()
{
ll t;
sf(t);
while(t--){
	ll n,m,i,j,k,a[102][102],k1,k2;
	sfd(n,m);sfd(k1,k2);
	f(i,0,n)
	f(j,0,m)
	sf(a[i][j]);
	
	q.push(0);
	
	
	ll an1[102][102],an2[102][102];
	memset(an1,-1,sizeof an1);
	memset(an2,-1,sizeof an2);
	memset(ma,0,sizeof ma);
	ma[0][0]=1;
	an1[0][0]=0;
	
	bfs(n,m,a,k1,1,an1);//first
	
	memset(ma,0,sizeof ma);
	ma[0][m-1]=1;
	an2[0][m-1]=0;
	q.push(m-1);
	bfs(n,m,a,k2,1,an2);
	ll ans=1000000;
	f(i,0,n){
	f(j,0,m)
	{
		if(a[i][j]==0)
		{
			if(an1[i][j]!=-1 && an2[i][j]!= -1)
			ans=min(ans,max(an1[i][j],an2[i][j]));
		}
	}
	}
	/*
	f(i,0,n)
	{
		f(j,0,m)
		printf("%lld ",an1[i][j]);
		printf("\n");
	}
	f(i,0,n)
	{
		f(j,0,m)
		printf("%lld ",an2[i][j]);
		printf("\n");
	}
	*/
	
	
	if(ans!=1000000 )
	pf(ans);
	else printf("-1\n");
	
}
 
return 0;
}
