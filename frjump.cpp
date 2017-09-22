 #include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(A,B) scanf("%lld%lld",&A,&B)
#define pf(A) printf("%lld\n",A)
#define f(i,A,B) for(i=A;i<B;i++)
#define mod 1000000007
ll fun(ll b,ll e,ll an){
if(e==0)
return an;
if(e&1)
an=(an%mod*b%mod)%mod;
b=(b%mod*b%mod)%mod;
return fun(b,e>>1,an);
}

int main()
{
	ll q,n,i,j,dig[100002],a[100003],k,m,f,p,x,r,up[100002]={0},dp[100002],di,uu[100002]={0};
	long double di2[100002]={0};
	sf(n);
	vector<int>v[n+2];
	vector<int>::iterator it;
	f(i,1,n+1){
	sf(a[i]);
	}
	f(r,1,n+1){
	ll an=1;
		long double fl=(long double)log10(a[1]);
		long double fs=0.0e10;
		for(i=1+r;i<=n ;i+=r)
		{
			if(r!=1)
			v[i].push_back(r);
			an=(an%mod*a[i]%mod)%mod;
			an%=mod;
			fl+=(long double)log10(a[i]);
			fs+=(long double)log10(a[i]);
		}
		
		long double re=(long double)pow(10,(long double)(fl-(floor)(fl)));
		//printf("%.10Lf\n",re);
		while(re<1)
		re*=10;
		
		dig[r]=(int)re;
		
		dp[r]=an;
		di2[r]=fs;
			
	}
	
	sf(q);
	while(q--)
	{
		sf(x);
		if(x==2)
		{
			sf(r);
			ll res=dp[r]%mod *a[1]%mod;
			res%=mod;
			long double fss=di2[r]+(long double)(a[1]);
			long double ff=(long double)pow(10,(long double)(fss-(floor)(fss)));
			
			while(ff<1.0)
			ff*=10;
			//cout<<(ceil)(ff)<<*it<<endl;
			ll tm=(floor)(ff);
			while(tm/10>0)
			tm/=10;
			printf("%lld %lld\n",tm,res);
			
			
		}
		else
		{
			cin>>p>>f;
			
			long double g=(long double)log10(a[p]);
			a[p]=f;
			if(p!=1)
			{
				for(it=v[p].begin();it!=v[p].end();it++)
				{
				
			//printf("%.10Lf d\n",di2[p]);
			di2[*it]=di2[*it]-g+(long double)log10(a[p]);
			long double po=di2[*it]+(long double)log10(a[1]);
			long double ff=(long double)pow(10,(long double)(po-(floor)(po)));
			
			while(ff<1.0)
			ff*=10;
			//cout<<(ceil)(ff)<<*it<<endl;
			ll tm=(floor)(ff);
			while(tm/10>0)
			tm/=10;
			dig[*it]=tm;
			//cout<<dig[*it]<<endl;
					ll res=1;
					for(i=1+(*it);i<=n;i+=(*it))
					{
						res=res%mod *a[i]%mod;
						res%=mod;
					}
					dp[*it]=res;
				}
				
				
				
			}
			
			
		}
	}
	
return 0;
}
