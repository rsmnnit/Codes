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

int main()
{
	ll n,i,j,k,a[1000000],m;
	sfl(n);
	f(i,0,n){
		sfl(a[i]);
		s+=a[i];
	}
	if(s%3){
		pf("0\n");
		return 0;
	}
	if(s==0){
		ll su=0;
		su+=a[0];
		i=1;
		while(su!=0)
		{
			su+=a[i];
			i++;
		}
		
		
	}
	
	
	
return 0;
}
