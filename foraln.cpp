#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
int main()
{
ll n,i,j,k,an=0;
map<string, pair<ll,ll> >mp;
map<string, pair<ll,ll> >::iterator it;
string s;
sf(n);
f(i,0,n)
{
	cin>>s;
	if(s.length()>1)
	if(s[s.length()-2]=='k' &&s[s.length()-1]=='a')
	{
		s[s.length()-1]='\0';
		mp[s].first++;
	}
	else if(s[s.length()-2]=='k' &&s[s.length()-1]=='i')
	{
		s[s.length()-1]='\0';
		mp[s].second++;
	}
}
for(it=mp.begin();it!=mp.end();it++)
an+=min((it->second).first,(it->second).second);
pf(an);
return 0;
}
