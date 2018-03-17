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
	ll i,n,k,a[10000],s=0,rem[12]={0};
	sfd(n,k);
	k++;
	f(i,0,n){
	sf(a[i]);
	s+=a[i];}
	ll f=0;
	f(i,0,n){
		rem[(a[i])%k]++;
	}
	f(i,0,11){
		if(rem[i]==n-1)
		f=1;
	}
	if(f)
	cout<<"YES"<<endl;
	else cout<<"NO"<<endl;
}
 
return 0;
}
