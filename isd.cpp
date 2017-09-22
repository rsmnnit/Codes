#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		long long n,i,j,a[100009];
		scanf("%lld",&n);
		for(i=0;i<n;i++)
		scanf("%lld",&a[i]);
		if(n==2)
		printf("0\n");
		else
		{
			int an=0;
			for(i=1;i<n-1;i++)
			if((a[i-1]<a[i]&&a[i]>a[i+1])||(a[i-1]>a[i]&&a[i]<a[i+1]))
			an++;
			printf("%d\n",an);
		}
	}

return 0;
}
