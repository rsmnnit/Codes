#include<bits/stdc++.h>
using namespace std;

int main(){
	long long int n,i,j,a,b,f=1,c;
	scanf("%lld",&n);
	if(n<3)
	printf("-1\n");
	else if(n%4==0)
	{
		printf("%lld %lld\n",3*(n/4),5*(n/4));
	}
	else if(n%3==0)
	{
		printf("%lld %lld\n",4*(n/3),5*(n/3));
	}
	else if(n%5==0)
	{
		printf("%lld %lld\n",3*(n/5),4*(n/5));
	}
	else {
		f=1;
		while(n%2==0)
		{n/=2;
		f*=2;}
	
	
		n-=1;
		n/=2;
		i=(long long)sqrt(n);
		if((i*(i+1))==n)
		{
		//printf("h %lld %lld\n",i,n);
			printf("%lld %lld\n",f*(2*i+1),f*(2*i*(i+1)));
		}
		else{
			printf("%lld %lld\n",f*(2*n*(n+1)),f*(2*n*(n+1)+1));
		}
	
	}

return 0;
}
