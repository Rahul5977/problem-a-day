#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[v[i]]++;
    }
    long long ans=1;
    for(auto it:mp){
        ans=(ans*(it.second+1))%1000000007;
    }
    cout<<ans-1<<endl;
}
int main(){
    solve();
}