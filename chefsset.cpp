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
#define gc() getchar_unlocked()
#define mod (1e9+7)
int si[1000003]={0};
int tr[1000001]={0};
int mark[1000001]={0};
int main()
{
int t,i,j;
si[1]=1;
f(i,2,1000001){
	if(!si[i])
	for(j=i;j<1000001;j+=i){
		si[j]=i;
	}
}
sfi(t);

while(t--){
	//memset(tr,0,sizeof tr);
	int a[1000002],ans=0;
	int n;
	vector<int>v;
	sfi(n);
	f(i,0,n){
		sfi(a[i]);
	}
	f(i,0,n){
		int tm= a[i];
		while(tm>1){
			int c=0;
			int nu=tm;
			while(tm%si[nu]==0){
				tm/=si[nu];
				c++;
			}
			if(c&1)
			{
				tr[si[nu]]++;
				if(!mark[si[nu]])
				v.pb(si[nu]);
				mark[si[nu]]=1;
			}
		}
	}
	long long tot=0;
	/*
	for(it=s.begin();it!=s.end();it++)
	{
		tot+=min(tr[*it],n-tr[*it]);
		mark[*it]=0;
	}
	*/
	f(i,0,v.size()){
		tot+=min(tr[v[i]],n-tr[v[i]]);
		mark[v[i]]=0;
		tr[v[i]]=0;
	}
	pfl(tot);
	
}
 
return 0;
}
