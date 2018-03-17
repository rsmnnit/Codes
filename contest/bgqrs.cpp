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
ll b1[100009][6]={0},b2[100009][6]={0},n,tmm[100009][6];
ll query(ll l,ll r){
	
}
void updateb2(ll l,ll v2,ll v5){
	for(;l<=n;l+=(l&(-l)))
	b2[l][2]+=v2,b2[l][5]+=v5;
}
void update(ll l,ll v2,ll v5){
	for(;l<=n;l+=(l&(-l))){
	b1[l][2]+=v2,b1[l][5]+=v5;
	//printf("up %d\n",l);
	}
}
void updater(ll l,ll r,ll v2,ll v5){
	update(l,v2,v5);
	update(r+1,-v2,-v5);
	updateb2(l,v2*(l-1),v5*(l-1));
	updateb2(r+1,-v2*r,-v5*r);
	
}

void updatey(ll l,ll v2,ll v5){
	ll c2=b1[l][2],c5=b1[l][5];
	for(;l<=n;l+=(l&(-l)))
	b1[l][2]+=v2,b1[l][5]+=v5;
}
ll query2(ll ft[100009][6],ll i){
	ll su=0;
	for(;i>0;i-=i&(-i))su+=ft[i][2];
	
	
	return su;
}
ll range2(ll l){
	return query2(b1,l)*l-query2(b2,l);
}
ll query5(ll ft[100009][6],ll i){
	ll su=0;
	for(;i>0;i-=i&(-i))su+=ft[i][5];
	return su;
}
ll range5(ll l){
	return query5(b1,l)*l-query5(b2,l);
}
int main()
{
int t;
sfi(t);
while(t--){
 	ll m,i,j,k,a[100009],a2[100004]={0},a5[100007]={0},ans=0;
 	sfld(n,m);
 	f(i,1,n+1){
 		sfl(a[i]);
 		
 		ll tmp=a[i];
 		while(tmp && tmp%10==0){
 		a2[i]++;a5[i]++;
 		tmp/=10;
 		}
 		while(tmp && tmp%2==0)
 		{a2[i]++;tmp/=2;}
 		while(tmp && tmp%5==0)
 		{a5[i]++;tmp/=5;}
 		updater(i,i,a2[i],a5[i]);	
 		//printf("%d i\n",i);
 	}
 	while(m--){
 		ll ty,l,r,x;
 		sfl(ty);
 		sfld(l,r);
 		//l--;r--;
 		if(ty==1){
 			sfl(x);
 			
 			ll c2=0,c5=0,tmp=x;
 			while(tmp && tmp%10==0){
 			c2++;c5++;tmp/=10;
 			}
 			while(tmp && tmp%2==0){
 			c2++;tmp/=2;}
 			while(tmp && tmp%5==0){
 			c5++;
 			tmp/=5;
 			}
 			
 			updater(l,r,c2,c5);
 			
 			/*
 			
 			f(i,l,r+1){
 			a[i]*=x;
 			a2[i]+=c2;a5[i]+=c5;
 			}
 			*/
 			
 			//printf("1\n");
 		}
 		else if(ty==2){
 			sfl(x);
 			ll c2=0,c5=0,tmp=x;
 			while(tmp && tmp%10==0){
 			c2++;c5++;tmp/=10;
 			}
 			while(tmp && tmp%2==0){
 			c2++;
 			tmp/=2;
 			}
 			while(tmp && tmp%5==0)
 			{c5++;
 			tmp/=5;
 			}
 			j=1;
 			
 			
 			f(i,l,r+1){
 			ll tmp2=j,c22=0,c55=0;
 			a[i]=x*(j++);
 			while(tmp2 && tmp2%10==0){
 			c22++;c55++;
 			tmp2/=10;
 			}
 			while(tmp2 && tmp2%2==0){
 			c22++;
 			tmp2/=2;
 			}
 			while(tmp2 && tmp2%5==0){
 			c55++;
 			tmp2/=5;
 			}
 			/*
 			a2[i]=c2+c22;
 			a5[i]=c5+c55;
 			*/
 			
 			
 			ll cc2=query2(b1,i),cc5=query5(b1,i);
 			tmm[i][2]=cc2;tmm[i][5]=cc5;
 			
 			updater(i,i,-tmm[i][2],-tmm[i][5]);
 			updater(i,i,c22+c2,c55+c5);
 			}
 		}
 		else{
 		//printf("y\n");
 			ll c2=0,c5=0;
 			
 			/*
 			f(i,l,r+1)
 			{
 				c2+=a2[i];c5+=a5[i];
 			}
 			*/
 			c2=range2(r)-range2(l-1);
 			c5=range5(r)-range5(l-1);
 			
 			ans+=(min(c2,c5));
 			//printf("3 %lld %lld\n",c2,c5);
 		}
 		//pfl(ans);
 	}
 	pfl(ans);
}
 
return 0;
}
