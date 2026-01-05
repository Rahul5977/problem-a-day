#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x;
    cin>>n>>x;
    int ans=0;
    vector<int>p(n);
    for(int i=0;i<n;i++) cin>>p[i];
    sort(p.begin(),p.end());
    int i=0;
    int j=n-1;
    while(i<=j){
        if(i==j){
            ans++;
            break;
        }
        if(p[j]+p[i]<=x){
            i++;   
        }
        ans++;
        j--;
    }
    
    cout<<ans<<endl;
}