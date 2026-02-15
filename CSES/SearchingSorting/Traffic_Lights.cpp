#include<bits/stdc++.h>
using namespace std;

void solve(){
    int x,n;
    cin>>x>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++) cin>>v[i];
    set<int>position;
    position.insert(0);
    position.insert(x);
    multiset<int>lenght;
    lenght.insert(x);
    for(int i=0;i<n;i++){
        auto it=position.upper_bound(v[i]);
        int right=*it;
        it--;
        int left =*it;
        //erase the one occurance of dist=right-left
        lenght.erase(lenght.find(right-left));
        lenght.insert(v[i]-left);
        lenght.insert(right-v[i]);
        cout<<*lenght.rbegin()<<" ";
        position.insert(v[i]);
    }
}
int main(){
    solve();
}