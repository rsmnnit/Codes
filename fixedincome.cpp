#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
bool comp(const pair<string,ll> &a,const pair<string,ll> &b){

return a.first<b.first;


}
int main()
{
	ll n,i,j,k,a,b,c,A[1003],zer=0;
	vector<pair<string,ll> >v;
	vector<pair<string,ll> >::iterator it;
	char s[1009][50];
	sf(n);
	cin>>a>>b>>c;
	ll to=0;
	f(i,0,n)
	{
		scanf("%s%lld",s[i],&A[i]);
		to+=A[i];
	}
	f(i,0,n)
	{
		double pa;
		ll re;
		pa=(A[i]*1.0)/(to);
		if(pa<((to*1.0)/n))
		v.push_back(make_pair(s[i],zer));
		else if(pa-((to*1.0)/n)>=0.5){
		double res=((ll)(pa-(to*1.0)/n+1)*1.0*c)/100.00;
		if(res-(ll)res>=0.5)
		ll re=(ll)res+1;
		else ll re=(ll)res;
		v.push_back(make_pair(s[i],re));
		}
		else {
		double res=((ll)(pa-(to*1.0)/n)*1.0*c)/100.00;
		if(res-(ll)res>=0.5){
		 re=(ll)res+1;}
		else { re=(ll)res;}
		v.push_back(make_pair(s[i],re));
		
		}
		
	}
 	sort(v.begin(),v.end(),comp);
 	for(it=v.begin();it!=v.end();it++)
 	cout<<it->first<<" "<<it->second<<endl;
 	

return 0;
}
