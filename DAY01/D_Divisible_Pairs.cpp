// Problem: <Problem Name / Link>
// Contest: Codeforces
// Rating: <e.g., 1300>
// Author: Rahul Raj
// Date: <YYYY-MM-DD>

// Approach:
// 1. <Write your short thought process / plan here>
// 2. ...
// Complexity: Time - O(...), Space - O(...)

#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#include <map>
#include <set>
#include <string>
#include <unordered_map>
using namespace std;

#define fastio ios::sync_with_stdio(false); cin.tie(0);
#define ll long long

void solve() {
    int n,x,y;
    cin>>n>>x>>y;
    vector<int> v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<pair<int,int>,int> mp;
    ll ans=0;
    for(int i=0;i<n;i++){
        int req_x=(x-v[i]%x)%x;
        int req_y=v[i]%y;
        ans+=mp[{req_x,req_y}];
        mp[{v[i]%x,v[i]%y}]++;
    } 
    cout<<ans<<endl;     
}

int main() {
    fastio;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
