#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,target;
    cin>>n>>target;
    map<int,int>mp;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    for(int i=0;i<n;i++){
        int val=v[i];
        int needed=target-val;
        if(mp.find(needed)!=mp.end()){
            cout<<i+1<< " "<< mp[needed]+1<<endl;
            return;
        }
        mp[val]=i;
    }
    cout<<"IMPOSSIBLE"<<endl;
}
int main(){
    solve();
}