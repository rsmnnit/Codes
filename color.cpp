#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100009];
		int r=0,g=0,b=0,i,j,n;
		scanf("%d",&n);
		scanf("%s",s);
		for(i=0;i<n;i++)
		{
			if(s[i]=='R')
			r++;
			else if(s[i]=='B')
			b++;
			else g++;
		}
		printf("%d\n",n-max(max(r,b),g));
	}

return 0;
}
