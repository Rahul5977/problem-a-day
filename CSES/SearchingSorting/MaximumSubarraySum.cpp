#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    long long sum=v[0];
    long long maxSum=v[0];
    for(int i=1;i<n;i++){
        if(sum<0) sum=0;
        sum+=v[i];
        maxSum=max(maxSum,sum);
    }
    cout<<maxSum<<endl;
}
int main(){
    solve();
}