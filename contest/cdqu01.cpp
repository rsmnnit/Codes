#include<bits/stdc++.h>
using namespace std;
char s1[10001][102],s2[10001][102];
int main()
{
	int n,q,i,j,k;
	scanf("%d%d",&n,&q);
	map<string,int>mp;
	for(i=1;i<=n;i++)
	{
		scanf("%s",s1[i]);
		scanf("%s",s2[i]);
		mp[s2[i]]=i;
	}
	
	for(i=0;i<q;i++)
	{
		char s[109];
		scanf("%s",s);
		if(mp[s]!=0)
		printf("%s\n",s1[mp[s]]);
		else
		printf("Name not found\n");
	}
	

return 0;
}
