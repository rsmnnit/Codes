#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include<bits/stdc++.h>
using namespace std;
long int is(long int val,long int a[],long int l,long int r){
    
       // cout<<val<<"in ";
    while(l<r){
        long m=(l+r)/2;
        //cout<<a[m]<<"m ";
        if(a[m]==val)
            return m;
        else if(a[m]<val)
            l=m+1;
        else r=m-1;
    }
    if(a[l]==val)
        return l;
        else if(a[r]==val)
        return r;
    return 0;
    
    
}
long find(long int a[],long int l, long int r){
   long an=0;
        long int s=a[r]-a[l-1];
       // cout<<s<<"s ";
        if(l!=r && s%2==0){
            long int id=is(a[l-1]+s/2,a,l,r);
          //   cout<<"id "<<id<<" "<<a[l-1]+s/2<<endl;
            if(id>0)
                {
               
                return an=max(find(a,l,id),find(a,id+1,r))+1;
               // cout<<"an "<<an<<endl;
            }
    }
    return 0;
}

int main() {
    int t;
    cin>>t;
    while(t--){
    long int n,i,j,k,l,a[1<<15];
    cin>>n;
        a[0]=0;
        for(i=1;i<=n;i++)
            cin>>a[i];
        for(i=1;i<=n;i++){
            a[i]+=a[i-1];
        // cout<<a[i]<<" ";   
        }
        long an=find(a,1,n);
    
    cout<<an<<endl;
    
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

