#include<bits/stdc++.h>
using namespace std;
int main()
{
	int i,j;
	long long a[23];
	a[1]=0;a[2]=1;
	for(i=3;i<=21;i++)
	{
		a[i]=a[i-1]*(i-1)+a[i-2]*(i-2);
	}
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n;
		char k[105];
		scanf("%s%d",k,&n);
		//printf("%s %d\n",k,n);
			long long tm= a[n];
			i=0;
			char s[25];
			while(tm)
			{
				s[i++]=tm%10+48;
				tm/=10;
			}
			i--;
			int l=strlen(k),an=0;
			while(i>=l-1)
			{
				if(s[i]==k[0])
				{
				int ke=0;
					if(l==1){
					an++;
					i-=l;
					ke=1;
					}
					else if(l==2)
					{if(s[i-1]==k[1])
					an++;
					i-=l;
					ke=1;
					}
					else if(l==2)
					{if(s[i-1]==k[1] && s[i-2]==k[2])
					an++;
					i-=l;
					ke=1;
					}
					if(ke==0)
					i--;
				}
				else
				i--;
			}
			printf("%d\n",an);
		
	}
return 0;
}
