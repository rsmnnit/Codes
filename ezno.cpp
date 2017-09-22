#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
ll b,d,an=0;
void fun(ll n, ll dig)
{
	ll i;	
	
	
	for(i=0;i<d;i++)
	{
		if((n*b+i)%dig==0)
		{pf(n*b+i);
		
			if(dig==d){
			an+=1;
			return;}
			else if(dig<d)
			fun((n*b+i),dig+1);
		
		}
		
	
	}
	
}
int main()
{
ll t;
sf(t);
while(t--){
	ll n,j,k;
	cin>>b>>d;
	
	an=0;
	for(j=1;j<d;j++)
	fun(j,2);
	cout<<an<<endl;




}
 
return 0;
}
