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
 	int n,aa=0,ab=0,ba=0,bb=0,i,j,k;
 	cin>>n;
 	string s;
 	f(i,0,n)
 	{
 		cin>>s;
 		if(s=="ab")
 		ab++;
 		else if(s=="aa")
 		aa++;
 		else if(s=="bb")
 		bb++;
 		else ba++;	
 	}
 	if(aa<bb){
 		int c=min(ab,ba);
 		f(i,0,c)
 		cout<<"ab";
 		f(i,0,aa)
 		cout<<"bb";
 		f(i,0,c)
 		cout<<"ba";
 		
 	}
 	else {
 		int c=min(ab,ba);
 		f(i,0,aa/2)
 		cout<<"aa";
 		f(i,0,c)
 		cout<<"ab";
 		if(aa&1)
 		cout<<"aa";
 		f(i,0,c)
 		cout<<"ba";
 		f(i,0,aa/2)
 		cout<<"aa";
 		
 	}
}
 
return 0;
}
