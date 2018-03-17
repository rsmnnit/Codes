#include <bits/stdc++.h>

using namespace std;
bool comp(const string &l , const string &r){
    if(l.length()<r.length())
        return true;
    return false;
}
int main(){
    int n,i;
    cin >> n;
    vector<string> unsorted(n);
    vector<vector<string> > v(1000001);
    for(int unsorted_i = 0; unsorted_i < n; unsorted_i++){
       cin >> unsorted[unsorted_i];
        v[unsorted[unsorted_i].length()].push_back(unsorted[unsorted_i]);
    }
    for(i=0;i<n;i++)
        if(v[i].size())
    sort(v[i].begin(),v[i].end());
    for(i=1;i<=1000000;i++)
        {
        if(v[i].size()>0){
            for(int j=0;j<v[i].size();j++)
                cout<<v[i][j]<<endl;
        }
    }
    // your code goes here
    return 0;
}

