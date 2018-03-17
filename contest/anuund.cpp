#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
ll t;
sf(t);
while(t--){
 ll a[1000000],n,i,j;
 sf(n);
 f(i,0,n)
 sf(a[i]);
 ll cr=a[0];
 for(i=1;i<n;i+=2)
 {
 	if(a[i-1]>a[i]){
 	a[i]+=a[i-1];
 	a[i-1]=a[i]-a[i-1];
 	a[i]-=a[i-1];
 	}
 	if(i<n-1){
 	if(a[i+1]>a[i]){
 	a[i]+=a[i+1];
 	a[i+1]=a[i]-a[i+1];
 	a[i]-=a[i+1];
 	}
 	}
 }
 f(i,0,n)
 printf("%lld ",a[i]);
 cout<<endl;
 }
return 0;
}
