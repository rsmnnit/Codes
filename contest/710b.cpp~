#include<bits/stdc++.h>
using namespace std;
long long int n,a[1000000],i,j,k,d[1000000],r[1000000];
int main(){
	
	cin>>n;
	for(i=0;i<n;i++)
	scanf("%lld",&a[i]);
	sort(a,a+n);
	d[0]=0;
	for(i=1;i<n;i++)
	d[i]=(i)*(a[i]-a[i-1])+d[i-1];
	r[n-1]=0;
	for(i=n-2;i>=0;i--)
	r[i]=r[i+1]+(n-1-i)*(a[i+1]-a[i]);
	long long ans = 10000000000000LL,an=-1;
	for(i=0;i<n;i++){
	if(ans>d[i]+r[i])
	{
		ans=d[i]+r[i];
		an=i;
	}
	//printf("%lld %lld\n",d[i],r[i]);
	}
	cout<<a[an]<<endl;
return 0;
}
