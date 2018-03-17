#include<bits/stdc++.h>
using namespace std;
#define MAX (1e18)
long long int co[105][105],a[105],n,m,k,dp[109][109][109];
long long int sol(int id,int c,int s){
	long long int ans=MAX,i,j;
	if(s==k && id==n)
	return 0;
	if(id==n)
	return MAX;
	if(dp[id][c][s]!=-1)
	return dp[id][c][s];
	if(a[id]!=0){
		if(id!=0 && a[id]==c)
		return dp[id][c][s]=sol(id+1,a[id],s);
		else return dp[id][c][s]=sol(id+1,a[id],s+1);
	}
	else{
		for(i=1;i<=m;i++)
		{
			int tmp=0;
			if(id!=0 && i==c)
			tmp=0;
			else tmp=1;
			
			dp[id][c][s]=ans=min(ans,co[id][i]+sol(id+1,i,s+tmp));
			//cout<<dp[id][c][s]<<"ans"<<endl;
		}
	}
	
	return dp[id][c][s]=ans;
	
}

int main(){
	long long int i,j;
	cin>>n>>m>>k;
	memset(dp,-1,sizeof dp);
	for(i=0;i<n;i++)
	cin>>a[i];
	
	for(i=0;i<n;i++)
	for(j=1;j<=m;j++)
	cin>>co[i][j];
	
	long long int ans=sol(0,0,0);	//ind,color,seg
	if(ans>=MAX)
	ans=-1;
	cout<<ans<<endl;
return 0;
}
