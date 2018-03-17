#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
int n,i,j,k,a[1000000],h[1000000]={0},po[1000000]={0},an[1000000]={0};
int main(){
	
	cin>>n;
	for(i=1;i<=n;i++)
	cin>>a[i];
	vector<int>v;
	int cycle=0;
	po[0]=1;
	for(i=1;i<=n;i++)
	po[i]=(po[i-1]*2)%mod;
	for(i=1;i<=n;i++)
	{
		if(!h[i]){
			j=i;
			int c=1;
			int st=j;
			while(!h[j]){
				h[j]=i+1;
				an[j]=c;
				j=a[j];
				c++;
			}
			if(h[j]==i+1){
			cycle+=c-an[j];
			v.push_back(c-an[j]);
			//cout<<cycle<<endl;
			}
		}
	}
	long long ans=0,nc=n-cycle;
	//cout<<cycle<<" "<<nc<<endl;
	if(v.size()==0){
		cout<<po[n]%mod<<endl;
	}
	else{
		int si=v.size();
		long long cal=1;
		//cout<<si<<"si"<<endl;
		for(i=0;i<si;i++){
		//cout<<po[nc]<<" "<<po[v[i]]<<endl;
			cal=cal*(po[(int)v[i]]-2+mod)%mod;
			cal%=mod;
			//ans+=(((po[(int)nc])%mod )* ((po[(int)v[i]]-2+mod)%mod)%mod)%mod;
			//ans+=(po[v[i]]-2+mod)%mod;
			//ans%=mod;
		}
		
		cal=(cal*po[nc])%mod;
		cout<<cal<<endl;
	}
	
return 0;
}
