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
int t;
sfi(t);
while(t--){
 	ll n,i,j,k=1000000,a[505][505],cnt=0;
 	sfl(n);
 	f(i,0,n)
 		f(j,0,n){
 			sfl(a[i][j]);
 			if(a[i][j]==0){
 			cnt++;
 			}
 		}
 	cnt/=2;
 	ll su=1;
 	i=1;
 	while(su<=cnt)
 	{
 		++i;
 		su+=i;
 	}
 	--i;
 	pfl(max(n-i-1,0LL));
}
 
return 0;
}
