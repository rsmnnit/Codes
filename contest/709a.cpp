#include<bits/stdc++.h>
using namespace std;
int main(){
long long int i,n,k,b,d,an=0,cur=0;
scanf("%lld%lld%lld",&n,&b,&d);
for(i=0;i<n;i++){
scanf("%lld",&k);
if(k<=b)
cur+=k;
if(cur>d)
cur=0,an++;
}
printf("%lld\n",an);

}
