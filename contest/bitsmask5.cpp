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
struct T
{
	ll z=0,o=0,lzy=0;
}tree[1000000],ZERO;
 
void build(ll node,ll l,ll r){
	
	if(l>r)
		return;
	if(l==r){
		tree[node].z = 1;
		tree[node].o = 0;
		return;
	}
	build(node*2,l,(l+r)/2);
	build(node*2+1,(l+r)/2+1,r);
	tree[node].z =tree[node*2].z+tree[node*2+1].z;
	tree[node].o =tree[node*2].o+tree[node*2+1].o;
	
}
 
void update(ll node, ll l,ll r, ll st, ll en){
	if(l>r)
		return;
		if(tree[node].lzy&1){
			ll tp = tree[node].z;
			tree[node].z = tree[node].o;
			tree[node].o = tp;
 
		if(st!=en){
			tree[node*2].lzy+=tree[node].lzy;
			tree[node*2+1].lzy+=tree[node].lzy;
		}
		}
		tree[node].lzy = 0;
	
	if(st>en || st>r || en<l)
		return;
	if(st>=l && en<=r)
	{
		ll tp = tree[node].z;
		tree[node].z = tree[node].o;
		tree[node].o = tp;
		if(st!=en){
		tree[node*2].lzy+=1;
		tree[node*2+1].lzy+=1;
		}
		return;
	}
	update(node*2,l,r,st,(st+en)/2);
	update(node*2+1,l,r,(st+en)/2+1,en);
	tree[node].z =tree[node*2].z+tree[node*2+1].z;
	tree[node].o =tree[node*2].o+tree[node*2+1].o;
	ll tp = tree[node].z;
			tree[node].z = tree[node].o;
			tree[node].o = tp;
			
	return;
 
}
 
T query(ll node, ll l,ll r, ll st, ll en){
	if(st>en)
		return ZERO;
	if(tree[node].lzy!=0){
	
		if(tree[node].lzy&1){
			swap(tree[node].z,tree[node].o);
		}
		if(st!=en){
			tree[node*2].lzy+=tree[node].lzy;
			tree[node*2+1].lzy+=tree[node].lzy;
		}
		tree[node].lzy = 0;
	}
	if(st>en || st>r || en<l)
		return ZERO;
	if(st>=l && en<=r)
	{
		return tree[node];
	}
	
	T p1 = query(node*2,l,r,st,(st+en)/2);
	T p2 = query(node*2+1,l,r,(st+en)/2+1,en);
	T temp ;
	temp.z =p1.z+p2.z;
	temp.o =p1.o+p2.o;
 
	return temp;
}
 
int main()
{
 	ll i,j,k,n,q;
 	sfld(n,q);
 	build(1,1,n);
 	while(q--){
 		ll ty,x,y;
 		sfl(ty);
 		sfld(x,y);
 		if(ty){
 			pfl(query(1,x+1,y+1,1,n).o);
 		}
 		else{
 			update(1,x+1,y+1,1,n);
 		}
 		ll node=1;
 			//pf("-->%lld %lld %lld\n",node,tree[node].z,tree[node].o);
 	}
return 0;
}
 