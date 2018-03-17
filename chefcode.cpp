			/* Radheshyam Lodhi
			radheshyamlodhi64@gmail.com
			CSE-MNNIT Allahabad */
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sfi(i) scanf("%d",&i)
#define sfid(a,b) scanf("%d%d",&a,&b)
#define sfl(i) scanf("%lld",&i)
#define sfld(a,b) scanf("%lld%lld",&a,&b)
#define pfl(a) printf("%lld\n",a)
#define pfi(a) printf("%d\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
#define pb push_back
#define MP make_pair
#define F first
#define S second
#define pf printf
#define sf scanf
#define gc() getchar_unlocked()
#define mod (1e9+7)
ll a[35],b[35];
int main()
{
 	ll n,m,i,j,k,l;
 	vector<double>v1;
 	vector<double>v2;
 	double find = 0.0;
 	sfld(n,k);
 	find = (double)log(k);
 	m=n/2;
 	n=n-m;
 	f(i,0,m)
 	sfl(a[i]);
 	f(i,0,n)
 	sfl(b[i]);
 	f(i,1,1+pow(2,m)){
 		double s = 0.0;
 		for(j=0;j<m;j++){
 			if(i & (1<<j)){
 				s+=(double)log(a[j]);
 			}
 		}
 		//pf("%lf\n",s);
 		v1.pb(s);
 	}

 	f(i,1,1+pow(2,n)){
 		double s = 0.0;
 		for(j=0;j<n;j++){
 			if(i & (1<<j)){
 				s+=(double)log(b[j]);
 			}
 		}
 		v2.pb(s);
 	}
 	sort(v1.begin(),v1.end());
 	sort(v2.begin(),v2.end());
 	//pf("%lld %lld",v1.size);
 	ll ans = 0;
 	
 	//pf("%lf\n",find);
 	for (i = 0; i < v1.size(); ++i)
 	{
 		double f = find*1.0-v1[i];
 		if(f>=0){
 			ll p = upper_bound(v2.begin(),v2.end(),f)- v2.begin();
 			//pf("val %lf find  %lf\n",*(upper_bound(v2.begin(),v2.end(),f)),f);
 			if(p>v2.size())
 				p=v2.size();
 			//pf("p %lld\n",p);
 			ans += p;
 		}
 	}
 	pfl(ans-1);



return 0;
}
