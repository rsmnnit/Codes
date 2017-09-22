#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,j,m,n,h[509]={0},an=0;
		char s[510][510];
		scanf("%d",&n);
		for(i=0;i<n;i++)
		{
			scanf("%s",s[i]);
			j=0;
			while(s[i][j]!='\0')
			{if(s[i][j]=='#')
			h[j]++;
			j++;}
		}
		for(i=0;i<n;i++)
		{
			j=0;
			while(s[i][j]!='#')
			{
				if(!h[j])
				{an++;
				break;
				}
				j++;
			}
			j=0;
			for(j=0;j<n;j++)
			if(s[i][j]=='#')
			h[j]--;
		}
		printf("%d\n",an);
	
	}
return 0;
}
