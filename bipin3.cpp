#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
ll po(ll b,ll e,ll an)
{
	if(e==0)
	return an;
	if(e&1)
	an=(an%mod *b%mod)%mod;
	return po((b%mod*b%mod)%mod,e/2,an%mod); 
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		ll n,k,an=1,i,j;
		cin>>n>>k;
		an=po(k-1,n-1,an);
		an=(an*k)%mod;
		cout<<an<<endl;
	
	}
return 0;
}
