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

int main()
{
int t;
sfi(t);
int T=1;
while(t--){
 	ll n;
 	sfl(n);
 	ll i,j,an=0;
 	for(j=1000;j>1;j--){
 	for(i=2;i<=1000;i++){
 		if((pow(i,j)-1)/(i*1.0-1)==n)
 		{
 		an=i;
 			break;
 		}
 	}
 	if(an)
 	break;
 	}
 	printf("Case #%d: %lld\n",T++,an);
}
 
return 0;
}
