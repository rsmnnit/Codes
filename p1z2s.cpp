#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n;
	cin>>n;
	long long i,j,an=0,t;
	for(i=0;i<n;i++)
	{
		cin>>t;
		an+=t;
	
	}
	if((an+1)/2>=n)
	cout<<(an+1)/2<<endl;
	else cout<<n<<endl;

return 0;
}
