#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    map<int,int>mp;
    long long ans=0;
    int left=0;
   for(int right=0;right<n;right++){
        //check x is already there in the window or not
        int x=v[right];
        if(mp.find(x)!=mp.end()){
            //x is already there
            left=max(left,mp[x]+1);
        }
        mp[x]=right;
        ans+=(right-left+1);
    }
    cout<<ans<<endl;
}
int main(){
    solve();
}