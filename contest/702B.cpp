#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
#define f(i,a,b) for(i=a;i<b;i++)
ll p[43];
map<ll,ll>mp;
multiset<ll>st;
int main()
{
ll i,j,k,n,an=0;

f(i,0,40)
{
p[i]=pow(2,i);
}
sf(n);
ll a[100009];
f(i,0,n)
{
sf(a[i]);
st.insert(a[i]);
mp[a[i]]+=1;
}
f(i,0,n)
{
	//ll tm=a[i];
	j=0;
	mp[a[i]]-=1;
	while(p[j]<=a[i])
	j++;
	for(;j<=32;j++)
	{
		if(st.size() && p[j]-a[i]<=1000000000)
		{
			multiset<ll>::iterator lo;
			multiset<ll>::iterator up;
			lo= lower_bound(st.begin(),st.end(),p[j]-a[i]);
			up= upper_bound(st.begin(),st.end(),p[j]-a[i]);
			if(*lo !=*up)
			an+=(ll)(*up-*lo);
			printf("%lld an\n",an);
			printf("%lld %lld\n",*lo,*up);
			printf("%lld a\n",st.size());
			lo= st.find(a[i]);
			up=lo;
			lo--;
			st.erase(lo,up);
			
		}
		
		
//		printf("%lld %lld\n",a[i],p[j]-a[i]);
		
		
	}
	
}
pf(an);
return 0;
}
