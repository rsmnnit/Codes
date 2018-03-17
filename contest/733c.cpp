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
 	int n,i,j,k;
 	sfi(n);
 	int a[n+1];
 	f(i,0,n)
 		sfi(a[i]);
 	int m;
 	sfi(m);
 	int b[m+1];
 	f(i,0,m)
 		sfi(b[i]);
 	j=0;
 	int f=0;
 	f(i,0,m){
 		int su=0;
 		while(j<n && su<b[i])
 		{
 			su+=a[j];j++;
 		}
 		if()
 	}
 	
 	
return 0;
}
