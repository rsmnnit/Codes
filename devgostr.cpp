#include<bits/stdc++.h>
using namespace std;
long long an=0;
void fun(char s[],int i,int d)
{
	if(s[i]=='\0')
	return;
	else
	{
		if(!ba[i])
		{
			if(s[i]!='a')
			d++;
			fun(s,i+1,d);
			
		
		}
		if(!bb[i])
		{
			if(s[i]!='b')
			d++;
			fun(s,i+1,d);
			
			
		}
		if(d<=k)
		an++;
	}
	

}

int main()
{
int t;
scanf("%d",&t);
while(t--)
{
	an=0;
	char s[1000];
	int a,k,i,j,c=0;
	scanf("%d%d",&a,&k);
	scanf("%s",s);
	if(strlen(s)>=3)
	printf("0\n");
	else{
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]!='a')
		c++;
	}
	if(c<=k)
	printf("1\n");
	else printf("0\n");
	}
}

return 0;
}
