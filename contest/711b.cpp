#include<bits/stdc++.h>
using namespace std;
int isvalid(long long a[][505],long long n){
	long long i,j,x,y,z=0,f=0;
	for(i=0;i<n;i++)
	z+=a[i][0];
	x=0;
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	x+=a[i][j];
	if(x!=z)
	{
	return 0;
	}
	x=0;
	}
	x=0;
	for(i=0;i<n;i++){
	for(j=0;j<n;j++)
	x+=a[j][i];
	if(x!=z)
	{
	return 0;
	}
	x=0;
	}
	x=0;
	for(i=0;i<n;i++)
	x+=a[i][i];
	if(x!=z)
	return 0;
	x=0;
	for(i=0;i<n;i++){
	x+=a[i][n-i-1];
	
	}
	if(x!=z)
	return 0;
	return 1;
	
}
int main(){
	long long int a[505][505],n,i,j,k,f=0,x,y;
	cin>>n;
	for(i=0;i<n;i++)
	for(j=0;j<n;j++)
	{cin>>a[i][j];
	if(a[i][j]==0)
	{x=i;y=j;}
	}
	long long rsum1=0,rsum2=0;
	if(n>1){
	if(x!=0){
	for(i=0;i<n;i++)
	{
		rsum1+=a[0][i];
		
	}
	for(i=0;i<n;i++)
	{
		rsum2+=a[x][i];
		
	}
	}
	else{
	for(i=0;i<n;i++)
	{
		rsum1+=a[0][i];
		rsum2+=a[1][i];
	}
	}
	long long num=abs(rsum1-rsum2);
	a[x][y]=num;
	if(isvalid(a,n) && num){
	cout<<(long long)num<<endl;
	}
	else cout<<"-1\n";
	
	}
	else cout<<"1\n";
return 0;
}
