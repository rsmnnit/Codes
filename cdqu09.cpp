#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		char s[100009];
		int i,j=0,k;
		getchar();
		scanf("%[^\n]s",s);
		printf("0");
		for(i=1;s[i]!='\0';i++)
		if(s[i]!=' '){
		if(s[i-1]!=' ')
		printf("-%lld",(long long)pow(i-j,2));
		else
		printf("$%lld",(long long)pow(i-j,2));}
		else j++;
		printf("\n");
	}
return 0;
}
