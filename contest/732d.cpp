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
 int p=0,n,m,i,j,k,an=0,a[100009],b[100009],im=0;
	sfid(n,m);
	f(i,0,n)
	sfi(a[i]);
	f(i,0,m)
	sfi(b[i]);
	sort(b,b+m);
	j=0;
	f(i,0,n){
	if(j>=m){
	while(p>0 && i<n){
	p-=a[i];
	an++;
	i++;
	}
	break;
	
	}
		if(a[i]>0){
		if(p>0){p-=a[i];
		if(p<0)p=0;
		an++;}
		else{ b[j]--;
		an++;
		}
		}
		else {
			if(b[j]==0)
			{j++;
			an++;
			}
			else {b[j]--;
			an++;
			}

		}
		if(b[j]==0){
		p++;j++;}
	}
	if(p>0 || j<m)
	an=-1;
	pfi(an);
	
return 0;
}
