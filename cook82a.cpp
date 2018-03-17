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
 map<string,ll>mp;
 string s[4];
 ll i,j,k;
 f(i,0,4){
 	cin>>s[i];
 	sfl(k);
 	mp[s[i]]=k;
 }
 ll f=0;
 if(mp["RealMadrid"]<mp["Malaga"] && mp["Barcelona"]>mp["Eibar"])
 	f=1;
 if(f)
 	pf("Barcelona\n");
 	else pf("RealMadrid\n");
 
}
 
return 0;
}
