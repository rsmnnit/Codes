#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
bool comp(const pair<ll,ll> &l,const pair<ll,ll> &r){

if (l.second<r.second)
return true;
else if(l.second==r.second)
if(l.first<r.first)
return true;
else return false;
return false;
}
int main()
{
ll t;
sf(t);
while(t--){
	ll n,i,j,k,s=0;
	vector<pair<ll,ll> >v;
	vector<pair<ll,ll> >::iterator it;
	sf(n);
	f(i,0,n)
	{
		sf(k);
		s+=k;
		v.push_back(make_pair(i,s%n));
		s%=n;
	}
	sort(v.begin(),v.end(),comp);
	ll p=0,pi;
	it=v.begin();
	if(it->second==0)
	{
		printf("%lld\n",it->first+1);
		for(i=0;i<=it->first;i++)
		printf("%lld ",i+1);
	
	}
	else{
	p=it->second;pi=it->first;
	it++;
	for(;it!=v.end();it++)
	{
		if(it->second==p)
		{
			pf(it->first-pi);
			pi++;
			while(pi<=it->first){
			printf("%lld ",pi+1);
			pi++;}
			printf("\n");
			break;
		}
		p=it->second;
		pi=it->first;
		
	}
	
	}
}
 
return 0;
}
