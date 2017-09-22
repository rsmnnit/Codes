#include<bits/stdc++.h>
using namespace std;
bool m[1000000]={0};
long long rec(long long a[],long long i,long long n)
{
	if(i>=n)
	return 0;
	long long ans,p1=0,p2=0,p3=0;
	p1=a[i]+a[i+1]+rec(a,i+3,n);
	p2=a[i]+rec(a,i+2,n);
	p3=rec(a,i+1,n);
	ans=max(max(p1,p2),p3);
	return  ans;
}
int main()
{
	long long n,a[1000000],i,j,k;
	scanf("%lld",&n);
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	a[n]=0;a[n+1]=0;a[n+2]=0;
	printf("%lld\n",rec(a,0,n));
}
