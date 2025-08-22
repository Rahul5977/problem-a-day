// Problem: <Problem Name / Link>
// Contest: Codeforces
// Rating: <e.g., 1300>
// Author: Rahul Raj
// Date: <YYYY-MM-DD>

// Approach:

#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <cmath>
#include <map>
#include <set>
#include <bitset>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

void solve() {
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    //storing pair in array(pair of indexes)
    vector<pair<int,int>> pairs(n,{-1,-1});
    for(int i=1;i<n;i++){
        if(v[i]!=v[i-1]) pairs[i]={i-1,i};
        else pairs[i]=pairs[i-1];
    }

    int q;
    cin>>q;
    while(q--){
        int l,r;
        cin>>l>>r;
        if(pairs[r-1]==pairs[l-1]) cout<<"-1 -1"<<endl;
        else cout<<pairs[r-1].first+1<<" "<<pairs[r-1].second+1<<endl;
    }
    cout<<endl;
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
