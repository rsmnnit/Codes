#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define sf(i) scanf("%lld",&i)
#define sfd(a,b) scanf("%lld%lld",&a,&b)
#define pf(a) printf("%lld\n",a)
int main()
{
ll t;
sf(t);
while(t--){
ll n,i,j,k,a[100009],ch=-1,p=0;
sf(n);
ll v[100009][4];
for(i=0;i<n;i++)
{	
	sf(a[i]);
	 
}
ll mxsum=a[0],mxpos=a[0],st=0,end=0,curmx=a[0],s=0,g=0;
for(i=0;i<n;i++)
{
	if(a[i]<0)
	{
		v[g][0]=st;
		v[g][1]=i-1;
		v[g][2]=s;
		s=0;
		st=-1;
		g++;
	}
	else 
	{
		s+=a[i];
		if(st<0)
		st=i;
	}

}
if(s>0)
{
	v[g][0]=st;
		v[g][1]=i-1;
		v[g][2]=s;
		s=0;
		st=-1;
		g++;
}
mxpos=v[0][2];
ll pr=v[0][2],cur;
s=0;
for(i=1;i<g;i++)
{
	cur=v[i][2];
	s=cur+pr;
	ll mn=100000001;
	for(j=v[i-1][1]+1;j<v[i][0];j++)
	{
		mn=min(mn,a[j]);
		s+=a[j];
		
	}
	s=s-mn;
	mxpos=max(s,mxpos);
	pr=cur;
}
if(mxpos)
pf(mxpos);
else
{
	ll an=-1000000001;
	for(i=0;i<n;i++)
	an=max(an,a[0]);
	pf(an);
}
}
 
return 0;
}
