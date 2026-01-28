#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<pair<int,int>>p(n);
    for(int i=0;i<n;i++){
        cin>>p[i].first>>p[i].second;
    }
    //sort based on the p.second
    sort(p.begin(), p.end(), [](const pair<int,int>& a, const pair<int,int>& b) {
    return a.second < b.second;
});
int ans=1;
int endTime=p[0].second;
for(int i=1;i<n;i++){
    if(p[i].first >=endTime){
        ans++;
        endTime=p[i].second;
    }
}
cout<<ans<<endl;

}