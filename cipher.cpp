#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    long int n,k,i;
    cin>>n>>k;
    string s;
    cin>>s;
    long int xo[1000007];
    long int x=s[i]-'0',xtil=s[i]-'0';
    xo[0]=x;
    cout<<s[i]-'0';
    for(i=1;i<n;i++){
        x=xtil^(s[i]-'0');
        xtil^=x;
        if(i+1-k>=0)
            xtil^=xo[i+1-k];
        xo[i]=x;
        cout<<(x);
        
    }
    cout<<endl;
    
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}

