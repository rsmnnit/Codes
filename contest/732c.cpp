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
 ll a,b,c,an=0;
 sfld(a,b);sfl(c);
 if(a>=b && a>=c){
 if(a-1-b>0)
 an+=a-1-b;
 an+=((a-1-c)>0?(a-1-c):0);
 }
 else if(b>=a && b>=c){
 if(b-1-a>0)an+=b-1-a;
 an+=((b-1-c)>0?(b-1-c):0);
 
 }
 else{ 
 if(c-1-a>0)
 an=c-1-a;
 an+=((c-1-b)>0?(c-1-b):0);

}
 pfl(an);
 
return 0;
}
