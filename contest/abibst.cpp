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
#define mod (1e9+7)
#define cent 100000
ll maxlevel=0;
ll ans[1000002]={0};
struct node{
	struct node* le;
	struct node* ri;
	ll val;
};

void insert(struct node* root,ll d,ll h){
	if(d<root->val){
	if(root->le==NULL)
	{
		struct node* roo = (struct node*)malloc(sizeof(struct node));
		roo->val=d;
		roo->le=NULL;
		roo->ri=NULL;
		root->le=roo;
		ans[h+cent-1]+=d;
		maxlevel=max(maxlevel,h+1);
		return;
	}
	else
	insert(root->le,d,h-1);
	
	}
	else{
	
	if(root->ri==NULL)
	{
		struct node* roo = (struct node*)malloc(sizeof(struct node));
		roo->val=d;
		roo->le=NULL;
		roo->ri=NULL;
		root->ri=roo;
		ans[h+cent+1]+=d;
		maxlevel=max(maxlevel,h+1);
		return;
	}
	else
	insert(root->ri,d,h+1);
	}
}


int main()
{
int t;
sfi(t);
while(t--){
maxlevel=0;
	ll n,k,i,j,q,d;
	sfld(n,q);
	sfl(d);
	struct node* root = (struct node*)malloc(sizeof(struct node));
	root->val=d;
	root->le=NULL;
	root->ri=NULL;
	ans[cent]=d;
	ll tp=d;
	f(i,1,n)	
	{
		sfl(d);
		struct node* tm =root;
		insert(tm,d,0);
	}
	 i=cent;
	while(ans[i]){
	i--;
	}
	
	while(q--){
		sfl(k);
		pfl(ans[i+k]);
	}
	while(i<=cent+maxlevel)
	{
		ans[i]=0;i++;
	}
}
 
return 0;
}
