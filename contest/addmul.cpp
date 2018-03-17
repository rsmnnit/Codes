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
#define mod (long)(1e9+7)

ll tree[1000000];
struct L
{
	ll add=0,mul=1;
}lazy[1000000];
ll a[100002];
void build(ll node,ll l, ll r){
	if(l==r){
		tree[node] = a[l];
		return;
	}
	if(l>r)
		return;
	build(node*2,l,(l+r)/2);
	build(node*2+1,(l+r)/2+1,r);
	tree[node]=(tree[node*2]+tree[node*2+1])%mod;
	return;
}

void update(ll node,ll l, ll r,ll st, ll en,ll add, ll mul){
	//pf("%lld %lld %lld %lld %lld st en\n",st,en,node,lazy[node].add,lazy[node].mul);
	
	if(!(lazy[node].add==0 && lazy[node].mul ==1))
	{
		tree[node] = ((tree[node]*lazy[node].mul)%mod +(en-st+1)*lazy[node].add)%mod;
		//pf("in lazy %lld %lld\n",node,tree[node]);
		if(st!=en){
			lazy[node*2].mul*=lazy[node].mul;
			lazy[node*2].add = lazy[node*2].add * lazy[node].mul%mod + lazy[node].add;

			lazy[node*2+1].mul*=lazy[node].mul;
			lazy[node*2+1].add = lazy[node*2+1].add * lazy[node].mul%mod + lazy[node].add;

			lazy[node*2+1].mul%=mod;
			lazy[node*2+1].add%=mod;
			lazy[node*2].mul%=mod;
			lazy[node*2].add%=mod;
		}
		lazy[node].add = 0;
		lazy[node].mul = 1;
		
	}
	if(st>r || en<l || st>en)
		return;
	if(st>=l && en<=r){
		tree[node] = ((tree[node]*mul)%mod +(en-st+1)*add)%mod;
		//pf("%lld %lld\n",node,tree[node]);
		if(st!=en){
			lazy[node*2].mul*=mul;
			lazy[node*2].add = lazy[node*2].add * mul%mod + add;

			lazy[node*2+1].mul*=mul;
			lazy[node*2+1].add = lazy[node*2+1].add * mul%mod + add;
			lazy[node*2+1].mul%=mod;
			lazy[node*2+1].add%=mod;
			lazy[node*2].mul%=mod;
			lazy[node*2].add%=mod;


	
		}
		lazy[node].add = 0;
		lazy[node].mul = 1;
		return;
	}

	update(node*2,l,r,st,(st+en)/2,add,mul);
	update(node*2+1,l,r,(st+en)/2+1,en,add,mul);
	tree[node] = (tree[node*2] + tree[node*2+1])%mod;
	//pf("%lld %lld\n",node,tree[node]);
	return;

}

ll query(ll node,ll l, ll r,ll st, ll en){
	if(st>r || en<l || st>en)
		return 0;
	if(!(lazy[node].add==0 && lazy[node].mul ==1))
	{
		tree[node] = ((tree[node]*lazy[node].mul)%mod +(en-st+1)*lazy[node].add)%mod;
		//pf("%lld %lld\n",node,tree[node]);
		if(st!=en){

			lazy[node*2].mul*=lazy[node].mul;
			lazy[node*2].add = lazy[node*2].add * lazy[node].mul%mod + lazy[node].add;

			lazy[node*2+1].mul*=lazy[node].mul;
			lazy[node*2+1].add = lazy[node*2+1].add * lazy[node].mul%mod + lazy[node].add;


			lazy[node*2+1].mul%=mod;
			lazy[node*2+1].add%=mod;
			lazy[node*2].mul%=mod;
			lazy[node*2].add%=mod;
		}
		lazy[node].add = 0;
		lazy[node].mul = 1;

	}
	if(st>=l && en<=r)
		return tree[node]%mod;

	ll p1 = query(node*2,l,r,st,(st+en)/2);
	ll p2 = query(node*2+1,l,r,(st+en)/2+1,en);
	return (p1+p2)%mod;
}

int main()
{
 ll i,j,k,m,n,q;
 sfld(n,q);
 f(i,1,n+1)sfl(a[i]);
 build(1,1,n);

 while(q--){
 	ll ty,x,y,v;
 	sfl(ty);
 	switch(ty){
 		case 1:
 		sf("%lld%lld%lld",&x,&y,&v);
 		update(1,x,y,1,n,v,1);
 		break;
 		case 2:
 		sf("%lld%lld%lld",&x,&y,&v);
 		update(1,x,y,1,n,0,v);
 		break;
 		case 3:
 		sf("%lld%lld%lld",&x,&y,&v);
 		update(1,x,y,1,n,v,0);
 		break;
 		default:
 		sf("%lld%lld",&x,&y);
 		pfl(query(1,x,y,1,n));
 		break;
 	}
 }
 //pfl(lazy[4].add);
return 0;
}
