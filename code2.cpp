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
#define mod (long)(1e9+7)

int main()
{
int t,T=1;
sfi(t);
while(T<=t){
 ll n,i,j,k,h[100]={0};
 sfl(n);
 string s;
 f(i,0,n){
 	cin>>s;
 	int c=0;
 	f(j,0,s.length()) if(s[j]=='X') c++;
 	h[c]++;
 }
 if(h[2]==n-1 && h[1])
 	pf("Case #%lld: POSSIBLE\n",T);
 else pf("Case #%lld: IMPOSSIBLE\n",T);
 T++;
}
 
return 0;
}
