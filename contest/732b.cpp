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
 	int an=0,c=0,n,k,i,j,a[10000];
 	sfid(n,k);
 	f(i,0,n)
 	sfi(a[i]);
 	int f=a[0],s=k-a[0];
 	f(i,1,n)
 	{
 		if(a[i]+a[i-1]<k){
 		int p=a[i];
 			a[i]=k-a[i-1];
 			c+=a[i]-p;
 		}
 		
 	}
 	pfi(c);
 	f(i,0,n){
 	printf("%d ",a[i]);
 	}
 	printf("\n");
return 0;
}
