#include<bits/stdc++.h>
using namespace std;
#define ll long long 
long long int dp[20][1<<18], sat[19],s[20][20],k,m,cnt=0;
bool check(ll mask){
	int c=0;
	while(mask>0)
	{
		if(mask&1)c++;
		mask>>=1;
	}
	
	if(c>=m)
	return 1;
	
	return 0;
}
ll sol(ll mask,int n,int p){
	ll ans=0,i;
	//cout<<mask<<endl;
	if(check(mask)||p>n)
	return 0;
	if(p>n)
	return 0;
	if(dp[p][mask]!=-1)
	return dp[p][mask];
	for(i=1;i<=n;i++)
	{if((mask&(1<<(i-1))))
	continue;
	//dp[p][mask]=ans=max(ans,sat[i]+s[i][p]+sol(mask|(1<<(i)),n,i));
		dp[p][mask]=ans=max(ans,sat[i]+s[i][p]+sol(mask|(1<<(i-1)),n,i));
	}
	return ans;
	
	
}
int main(){
	ll n,i,j;
	cin>>n>>m>>k;
	memset(dp,-1,sizeof dp);
	for(i=1;i<=n;i++)
	cin>>sat[i];
	for(i=0;i<k;i++){
		int x,y;
		cin>>x>>y;
		cin>>j;
		s[y][x]=j;
	}
	
	cout<<sol(0LL,n,0)<<endl;//mask,n
	
return 0;
}
