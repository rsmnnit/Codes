#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i=0,f=0;
		char s[109];
		scanf("%s",s);
		while(s[i]!='\0')
		{
			if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
			f++;
			if(f)
			break;
			i++;
		}
		if(f)
		printf("yes\n");
		else printf("no\n");
	}
return 0;
}
