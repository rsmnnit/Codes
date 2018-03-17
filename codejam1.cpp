#include<bits/stdc++.h>
using namespace std;
#define ll long long
int r,c,rs,cs,st;
float p,q;
bool vis[35][35];
bool safe(int i, int j){
	if(i>=0 && i<r && j>=0 && j<c && !vis[i][j] )
	return true;
	return false;
}
double dfs(float a[30][30],int k ,int i,int j){
	printf("%d %d\n",i,j);
	double an=0.0,P=0.0,Q=0.0,R=0.0,S=0.0;
	if(k==0 || !safe(i,j))
	return 0.0;
	vis[i][j]=true;
	
	
	
	
	if(safe(i+1,j))
	{	
		vis[i+1][j]=true;
		an=max(an,an+a[i+1][j]+dfs(a,k-1,i+1,j));
		vis[i+1][j]=false;
	}
	if(safe(i-1,j))
	{	
		vis[i-1][j]=true;
		an= max(an,an+a[i-1][j]+dfs(a,k-1,i-1,j));
		vis[i-1][j]=false;
	}
	if(safe(i,j+1))
	{	
		vis[i][j+1]=true;
		an= max(an,an+a[i][j+1]+dfs(a,k-1,i,j+1));
		vis[i][j+1]=false;
	}
	if(safe(i,j-1))
	{	
		vis[i][j-1]=true;
		an= max(an,an+a[i][j-1]+dfs(a,k-1,i,j-1));
		vis[i][j-1]=false;
	}
	//printf("%f %f %f %f\n",P,Q,R,S);
	printf("%f\n",an);
	return an;
	
}
int main(){
	int t;
	cin>>t;
	while(t--)
	{
		int i,j;
		memset(vis,false,sizeof vis);
		scanf("%d%d%d%d%d",&r,&c,&rs,&cs,&st);
		scanf("%f%f",&p,&q);
		float a[30][30];
		string s;
		for(i=0;i<r;i++)
		{
			char ch;
			for(j=0;j<c;j++){
			scanf("%c",&ch);
			getchar();
			a[i][j]=ch=='A'?p:q;
			
			}
		}
		
		double ans=0.0;
		ans=dfs(a,st,rs,cs);
		
		printf("%.6f\n",ans);
	}
return 0;
}
