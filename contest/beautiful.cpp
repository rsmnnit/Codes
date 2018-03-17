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
 	ll po=0,mn=0,n,i,j,k,m1=-100000000000,m2=-100000000000,a[100007],zero=0,mone=0,one=0;
 	sfl(n);
 	f(i,0,n)
 	{
 		sfl(a[i]);
 		if(a[i]==-1)
 		mone++;
 		if(a[i]==1)
 		one++;
 		if(a[i]<-1 || a[i]>1)
 		mn++;
 	}
 	if(mn==0 )
 	{
 		if(one && mone)
 		printf("yes\n");
 		else if(one==0 && mone==0)
 		printf("yes\n");
 		
 		else if(one && !mone)
 		printf("yes\n");
 		else if (mone==1 )
 		printf("yes\n");
 		else printf("no\n");
 		continue;
 	}
 	else if(mn==1 ){
 	if(mone==0)printf("yes\n");
 	else printf("no\n");
 	}
 	
 	else if(mn>=2)
 	{
 		printf("no\n");
 	}
 	
 	
}
 
return 0;
}
