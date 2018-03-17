#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
 
//********************************** SIEVE ***********
#define MAX 1000001
#define SQRT_MAX 1001
int flag[(MAX+100)>>5];
int primes[MAX/10], len;
#define get(i) ( flag[i>>5] & (1<<(i&31)) )
#define set(i) ( flag[i>>5] |= (1<<(i&31)) )
void sieve(){
    primes[len++]=2;
    for(int i=3; i<=SQRT_MAX; i+=2 ) if ( !get(i) ) for( int j=i*i; j<MAX; j+=(2*i) ) set(j);
    for(int i=3; i<MAX; i+=2 )       if ( !get(i) ) primes[len++]=i;
}
//*****************************************************
 
#define ll long long
ll a, b;
vector<int> divisors[100005];
ll num[100005];
 
void factorize_ab(){
    int p, pow;
    ll st, en, tmp;
    for( ll i=a; i<=b; i++ ) num[i-a]=1;
    for( int i=0; i<len && primes[i]<=b; i++ ){
        p=primes[i];
        st=( a%p?( (a/p)+1 )*p :a ); en = ( b%p? ( (b/p) )*p : b);
        for( ll j=st; j<=en; j+=p ){
            tmp=j; pow=0;
            while( tmp%p == 0 ) {
                tmp /=p;
                num[j-a]*=p;
                pow++;
            }
            divisors[j-a].push_back(pow);
        }
    }
    for( ll i=a; i<=b; i++ ){
        if ( num[i-a] != i && i>1 ) divisors[i-a].push_back(1);
    }
}
 
ll solve( vector<int>& v ){
    if( v.size()==0 )
        return 0;
    if( v.size()==1 && v[0]==1 )
        return 2;
    ll ans=1;
    sort(v.begin(), v.end());
    for( int i=0; i<v.size(); i++ ) ans*=(v[i]+1);
    v[ v.size()-1 ] -= 1;
    if ( v[ v.size()-1 ] ==0 ) v.pop_back();
    return ans + solve(v);
}
 
int main(){
    sieve();
    cin >> a >> b;
    factorize_ab();
    ll ans=0;
    for( ll i=a; i<=b; i++ ){
        ans += solve( divisors[i-a]);
    }
    cout << ans << endl;
}
