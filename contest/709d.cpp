#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int a,b,c,d,i,j,k,im=0;
	long long int aa,bb,cc,dd;
	scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
	double t=(1.0+sqrt(1+8*a))/2.0;
	if(t==(long long int)(t))
	{
		aa=(long long int)t;
	}
	else im=1;
	if(!im){
	t=(1.0+sqrt(1+8*d))/2.0;
	if(t==(long long int)(t))
	{
		dd=(long long int)t;
	}
	else im=1;
	if(!im){
	if(b%dd==0)
	bb=b/dd;
	else im=1;
	if(!im){
	if(c%dd==0)
	cc=c/dd;
	else im=1;
	if(!im){
	
	//printf("%d %d %d %d\n",aa,bb,cc,dd);
	if(a==0 && b==0 && c==0 &&d==0)
	im=0,printf("0\n");
	else{
	
	for(i=0;i<aa-cc;i++)
	printf("0");
	for(i=0;i<dd;i++)
	printf("1");
	for(i=0;i<cc;i++)
	printf("0");
	printf("\n");
	return 0;
	}}}
	}
	}
	
	if(im)
	printf("Impossible\n");
return 0;
}
