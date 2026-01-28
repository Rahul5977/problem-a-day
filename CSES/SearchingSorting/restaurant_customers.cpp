#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>p;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        p.push_back({a,b});
    }
    sort(p.begin(),p.end());
    int ans=1;
    //maximum people at a given duration
    int minExitTime=p[0].second;
    int ans=1;
    int maxAns=1;
    for(int i=1;i<n;i++){
        if(p[i].first < p[i-1].second && p[i].first < minExitTime){
            ans++;
            minExitTime=min(minExitTime,p[i].second);
        }
    }
}