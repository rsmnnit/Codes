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
 	ll n,i,j,k,x[1003],y[1003],mnx=100000000,mxx=-100000000,mny=100000000,mxy=-100000000;
 	sfl(n);
 	f(i,0,n)
 	{
 		sfld(x[i],y[i]);
 		mnx=min(mnx,x[i]);
 		mxx=max(mxx,x[i]);
 		mny=min(mny,y[i]);
 		mxy=max(mxy,y[i]);
 		
 	}
 	ll fx,fy;
 	if(mxx-mnx<=1)
 	fx=mxx-mnx+1;
 	else {
 		ll ls=0,rs=0;
 		ll f,s;
 		f=(mnx+(mxx-mnx)/2);
 		s=(mnx+(mxx-mnx+1)/2);
 		f(i,0,n){
 			if(x[i]<f)
 			ls+=f-x[i];
 			if(x[i]>f)
 			rs+=x[i]-f;
 		}
 		if((ls==rs) && (f!=s))
 		fx=2;
 		else fx=1;
 		//cout<<f<<s<<endl;
 	}
 	
 	if(mxy-mny<=1)
 	fy=mxy-mny+1;
 	else {
 		ll ls=0,rs=0;
 		ll f,s;
 		f=(mny+(mxy-mny)/2);
 		s=(mny+(mxy-mny+1)/2);
 		f(i,0,n){
 			if(y[i]<f)
 			ls+=f-y[i];
 			if(y[i]>f)
 			rs+=y[i]-f;
 		}
 		if((ls==rs) && (f!=s))
 		fy=2;
 		else fy=1;
 		//cout<<f<<s<<endl;
 	}
 	
 	pfl(fx*fy);
}
 
return 0;
}
