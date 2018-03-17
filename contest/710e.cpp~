#include<bits/stdc++.h>
using namespace std;
long long int n,i,j,x,y,an=0,dp[20000009];

#define MAX (1e18)
long long solve(long long i){
	if(dp[i]!=-1)
	return dp[i];
	if(i==n+1)
	return 0;
	else if(i>n)
	return x*(i-n);
	return dp[i]=min(x+solve(i+1),y+(solve(2*i+1)));
}
int main(){
memset(dp,-1,sizeof dp);
cin>>n>>x>>y;
an=solve(1);
cout<<an<<endl;
return 0;
}
