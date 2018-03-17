#include<bits/stdc++.h>
using namespace std;
long int a[100009],i,j,n,m,x,s,f=0,dist[100009],an;
int main(){
scanf("%ld%ld",&n,&s);
for(i=0;i<n;i++){
scanf("%ld",&a[i]);
if(a[i]==s)
f=1;
}
long int check=n;
if(!f){
a[n]=s;n+=1;}
if(f)
check--;
sort(a,a+n);
dist[0]=0;
int ind=-1;
if(s==a[0])
ind=0;
for(i=1;i<n;i++)
{

	if(a[i]==s)
	ind=i;
	dist[i]=dist[i-1]+a[i]-a[i-1];
}

if(ind==0){
an=dist[n-2];
//printf("%d\n",an);
}
else if(ind==n-1)
an=dist[n-1]-dist[1];
else{
	an=min(dist[n-1]-dist[ind]+2*(dist[ind]-dist[1]),(dist[n-1]-dist[ind])*2+(dist[ind]-dist[1]));
	an=min(an,dist[n-2]-dist[ind]+2*(dist[ind]-dist[0]));
	an=min(an,(dist[n-2]-dist[ind])*2+dist[ind]-dist[0]);
}


printf("%ld\n",an);
return 0;
}
