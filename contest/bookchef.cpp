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
int h[1000000]={0};
class st{
	public:
	int f,p;
	string s;
};
bool comp(const class st &le,const class st & ri){
	if(h[le.f]&&h[ri.f])
	return (le.p>=ri.p);
	if(h[le.f])
	return true;
	if(h[ri.f])
	return false;
	return le.p>=ri.p;
}
int main()
{
 	int n,i,j,k,m;
 	sfid(n,m);
 	f(i,0,n){
 		sfi(j);
 		h[j]=1;
 	}
 	st a[m+1];
 	f(i,0,m){
 		cin>>a[i].f>>a[i].p>>a[i].s;
 	}
 	sort(a,a+m,comp);
 	f(i,0,m)
 	cout<<a[i].s<<endl;
return 0;
}
