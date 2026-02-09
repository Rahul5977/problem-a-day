#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,int>mp;
    int ans=0;
    int startIdx=0;
    for(int i=0;i<n;i++){
        if(mp.find(v[i])!=mp.end()){
            startIdx=max(startIdx,mp[v[i]]+1);
        }
        mp[v[i]]=i;
        ans=max(ans,i-startIdx+1);
    }
    cout<<ans<<endl;
}
int main(){
    solve();
}