#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
bool comp(const pair<ll,ll> &p,const pair<ll,ll> &q)
{
	if( p.first<q.first)
	return true;
	else if(p.first==q.first)
	return (p.second<q.second);
	else return false;	
}
bool comp1(const pair<ll,ll> &p,const pair<ll,ll> &q)
{
	if( p.second<q.second)
	return true;
	else if(p.second==q.second)
	return (p.first<q.first);
	else return false;	
}
int main()
{
	ll n,i,j,k,x,y;
	sf(n);
	vector<pair<ll,ll> >v1;
	vector<pair<ll,ll> >v2;
	vector<pair<ll,ll> >:: iterator  i1;
	vector<pair<ll,ll> >:: iterator  i2;
	f(i,0,n){
	sfd(x,y);
	v1.push_back(make_pair(x,y));
	}
	f(i,0,n){
	sfd(x,y);
	v2.push_back(make_pair(x,y));
	}
	sort(v1.begin(),v1.end(),comp);
	sort(v2.begin(),v2.end(),comp);
	ll ans=0;
	for(i1=v1.begin(),i2=v2.begin();i1!=v1.end();i1++,i2++)
	{
		ans+=abs(i1->first-i2->first)+abs(i1->second-i2->second);
	}
	sort(v1.begin(),v1.end(),comp1);
	sort(v2.begin(),v2.end(),comp1);
	ll an=0;
	for(i1=v1.begin(),i2=v2.begin();i1!=v1.end();i1++,i2++)
	{
		an+=abs(i1->first-i2->first)+abs(i1->second-i2->second);
	}
	if(ans<an)
	ans=an;
	pf(ans);
return 0;
}
