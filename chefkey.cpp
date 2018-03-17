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
while(t--){
 	int n,m,c,i,an=0;
 	sfid(n,m);
 	sfi(c);
 	for(i=1;i*i<=c;i++){
 		if(c%i==0){
 			if(i<=n && c/i<=m)
 			an++;
 			if(i<=m && c/i<=n &&(i!=c/i))
 			an++;
 			
 		}
 		
 	}
 	pfi(an);
}
 
return 0;
}
