#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>arr(n);
    map<int,int>mp;
    for(int i=0;i<n;i++){
        cin>>arr[i];
        mp[arr[i]]=i;
    }
    int rounds=1;
    for(int i=1;i<n;i++){
        if(mp[i+1]< mp[i]){
            rounds++;
        }
    }
    cout<<rounds<<endl;
    
}
int main(){
    solve();
}