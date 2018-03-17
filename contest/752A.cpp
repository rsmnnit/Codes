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
 ll n,m,k,a,d;
 cin>>n>>m>>k;
 d=k/(2*m);
 k%=(2*m);
 if(k==0)
 cout<<d<<" ";
 else cout<<d+1<<" ";
 if(k==0)
 k=2*m;
 cout<<(k+1)/2<<" ";
 if(k&1)
 cout<<"L"<<" "<<endl;
 else cout<<"R"<<" "<<endl;
 
 
return 0;
}
