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
struct st
{
	ll x,y;
}a[100009];
bool cmp(const st &l,const st &r){
	ll p1=0,p2=0;
	if(l.y>=2*l.x)
		p1=l.x;
	else p1=l.y-l.x;
	if(r.y>=2*r.x)
		p2=r.x;
	else p2=r.y-r.x;

	return p1>p2;
}
int main()
{
 ll n,f,i,j,k;
 sfld(n,f);
 j=0;
 ll x,y,an=0;
 f(i,0,n){
 	sfld(x,y);
 	if(y>x && x){
 		a[j].x=x;a[j++].y=y;
 	}
 	 an+=min(x,y);
 }
//pfl(an);
 sort(a,a+j,cmp);
 for(i=0;i<j;i++)
 {//pfl(a[i].y);
 	
 	if(f>0){

 	if(a[i].y>=2*a[i].x)
 		an+=a[i].x;
 	else {
 		ll v=(a[i].y-a[i].x);
 		an+=v;
 	}
 }
 
 	f--;
 
 //pfl(an);
 }
pfl(an);
return 0;
}
