#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,k,f=0;
	cin>>n;
	string s[n+1];
	for(i=0;i<n;i++)
	cin>>s[i];
	for(i=0;i<n;i++)
	{
		if(s[i][0]=='O' && s[i][1]=='O')
		{
			s[i][0]='+';
			s[i][1]='+';
			f=1;
			break;
			
		}
		else if(s[i][3]=='O' && s[i][4]=='O')
		{
			s[i][3]='+';
			s[i][4]='+';
			f=1;
			break;
		}
	}
	if(f){
		cout<<"YES"<<endl;
		for(i=0;i<n;i++)
		cout<<s[i]<<endl;
	}
	else cout<<"NO"<<endl;

return 0;
}
