#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define mod 1000000007
bool comp(const pair<ll,ll >&f,const pair<ll,ll >&s)
{
	return f.first>s.first;
}

int main()
{
ll t;
sf(t);
while(t--){
	ll i,j,k,n,ne=0;
	vector<pair<ll,ll> >v;
	vector<ll> vn;
	vector<ll> vp;
	vector<ll>::iterator i1,i2;
	sfd(n,k);
	f(i,0,n)
	{
		sf(j);
		if(j<0){
		v.push_back(make_pair(j*-1,1));
		vn.push_back(j);
		ne++;
		}
		else{
		vp.push_back(j);
		v.push_back(make_pair(j,0));
		}
	}
	sort(v.begin(),v.end(),comp);
	sort(vp.begin(),vp.end());
	sort(vn.begin(),vn.end());
	vector<pair<ll,ll > >::iterator it,it2;
	i=0;
	ll res=1,pa=0,ind=-1,pres,c=0,res1;
	if(ne==n)
	{
		i=0;
		res1=1;
		ll co=0;
		for(it=v.begin();it!=v.end();it++)
		{
			if(n-i<=k){
			res=(res%mod*((it->first)*-1+2*mod)%mod)%mod;
			res%=mod;
			}
			
			if(co<k){
			res1=(res1%mod*((it->first)*-1+2*mod)%mod)%mod;
			res1%=mod;
			co++;
			
			}
			i++;
		}
		if(k%2==0)
		res=res1;

	}
	
	else{
	for(it=v.begin();it!=v.end()  && i<k;it++)
	{
		if(it->second==0){
		res*=(it->first)%mod;
		res%=mod;
		i++;
		}
		else {
		res=(res%mod*((it->first)*-1+2*mod)%mod)%mod;
		res%=mod;
		i++;
		if(pa)
		pa=0;
		else{ pa=1;
		ind=i-1;
		}
		c++;
		}
	}
	if(pa &&it!=v.end())
	{
		while(it!=v.end())
		{
			if(it->second==0)
			break;
			it++;
		}
		
		i=0;
		pres=res;
		res=1;
			for(it2=v.begin();i<k;i++,it2++)
			{
				if(i!=ind)
				res=(res%mod*((it2->first)*-1+2*mod)%mod)%mod;
				res%=mod;	
			}
			if(it==v.end())
			
				{
					c=0;
					res=1;
					i1=vp.begin();
					i2=vn.begin();
					while(c<k)
					{	if(i1!=vp.end() &&i2!=vn.end())
						{if(abs(*i2)<(*i1))
						{
							res=res*(*i2+ 2*mod)%mod;
							res%=mod;
							c++;
							i2++;
						}
						else
						{
							res=res*(*i1)%mod;
							res%=mod;
							i1++;c++;
						}
						}
						else if(i1!=vp.end())
						{
						res=res*(*i1)%mod;
							res%=mod;
							i1++;c++;
						
						}
						else if(i2!=vn.end())
						{
						res=res*(*i2+ 2*mod)%mod;
							res%=mod;
							c++;
							i2++;
						}
					}
					
					
				}
				else
				{
				res=(res%mod*((it->first)+2*mod)%mod)%mod;
				res%=mod;
				}
			
			
		
	}
	}
	pf(res);
	
}
 
return 0;
}
